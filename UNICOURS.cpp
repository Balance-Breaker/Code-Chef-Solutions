        #include<bits/stdc++.h>
        using namespace std;
        int main(){
        	int testcases;
        	scanf("%d",&testcases);
        	int temp=0;
        	int max=0;
        	while(testcases--){
        		int n;
        		scanf("%d",&n);
        		int ar[n];
        		for (int i = 0; i < n; ++i)
        		{
        			scanf("%d",&ar[i]);
        		}
        		sort(ar,ar+n);
        		int res=n-ar[n-1];
            	cout<<res<<endl;
        	}
        	return 0;
        }  
