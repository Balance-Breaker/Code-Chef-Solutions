    #include <bits/stdc++.h>
    using namespace std;
     
    int dp[1000][1000];
    int gcd(int a,int b){
        if(b==0)
            return a;
        else 
            return gcd(b,a%b);
    }
    void initdp(){
            dp[1][1]=0;
        for(int i=1;i<1000;i++){
            dp[i][0]=INT_MAX;
            dp[0][i]=INT_MAX;
        }
        for(int i=1;i<1000;i++){
            for(int j=1;j<1000;j++){
                if(i==1&j==1)
                    continue;
                    
                    int gd=gcd(i,j);
                    if(gd!=1)
                        dp[i][j]=min(dp[i/gd][j/gd],min(dp[i-1][j],dp[i][j-1]))+1;
                    else
                        dp[i][j]= min(dp[i][j-1],dp[i-1][j])+1;
            }
        }
    }
    int main()
    {   
        initdp();
        int testcases;
        cin>>testcases;
        while(testcases--){
            int m,n;
            cin>>m>>n;
            cout<<dp[m][n]<<endl;
        }
	return 0;
    } 
