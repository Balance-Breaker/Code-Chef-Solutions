    #include<bits/stdc++.h>
    using namespace std;
     
    long long int totals[10011];
    long long int select(int n, int i){
    	sort(totals,totals+n);
    	return totals[i-1];
    }
    int main(){
    	int testcases;
    	scanf("%d",&testcases);
    	while(testcases--)
    	{
    		int n,k,e,m;
    		scanf("%d%d%d%d",&n,&k,&e,&m);
    		for(int i=0;i<n-1;i++){
    			long long total=0;
    			for(int j=0;j<e;j++){
    				long long int score;
    				scanf("%lld",&score);
    				total=total+score;
    			}
    			totals[i]=total;
    		}
    		long long x=select(n-1,n-k);
    		long long int y=0;
    		for(int j=0;j<e-1;j++)
    		{
    			long long int score;
    			scanf("%lld",&score);
    			y=y+score;
    		}
    		long long int answer=max(0ll, x-y+1);
    		if(answer>m)
    			printf("Impossible\n");
    		else
    			printf("%lld\n",answer);
    	}
    	return 0;
    } 
