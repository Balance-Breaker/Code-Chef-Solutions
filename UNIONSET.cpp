    #include<bits/stdc++.h>
    using namespace std;
    int main()
    {
        int testcases;
        
        scanf("%d",&testcases);
        while(testcases--){
            int n,k,temp,ans=0;
            cin>>n>>k;
            int len[n];
             int ar[n][k];
            for(int i=0;i<n;i++)
            {
                cin>>len[i];
                for(int j=0;j<len[i];j++){
                    cin>>ar[i][j];
                }
            }
            for(int i=0;i<n-1;i++)
            {
                bool br[k+1]={0};
                int x=0,sum=0;
                while(x<len[i])
                {
                    br[ar[i][x]]=true;
                    x++;
                    sum++;
                }
                
                int sword=sum;
                for(int j=i+1;j<n;j++){
                    sum=sword;
                    
                    if(len[j]>=k-len[i])
                    {
                       x=0;
                        while(x<len[j])
                        {
                            if(!br[ar[j][x]])
                            {
                                sum++;
                            }
                            x++;
                        }
                        if(sum==k){
                            ans++;
                        }
                    }
                }
                
            }
            cout<<ans<<endl;
        }
        return 0;
    } 
