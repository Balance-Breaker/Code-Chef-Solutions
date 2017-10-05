    #include<bits/stdc++.h>
    #define MOD 1000000009
    using namespace std;
    int main(){
    	vector<pair<long long,char> > a;
    	long long n,m,y,t,ans;
    	char x;
    	cin>>t;
    	while(t--){
    		ans=1;
    		cin>>n>>m;
    		a.resize(m);
    		for(int i=0;i<m;i++){
    			cin>>x>>y;
    			a[i].first=y;
    			a[i].second=x;
    		}
    		sort(a.begin(),a.end());
    		for(int i=1;i<m;i++){
    			if(a[i].second!=a[i-1].second){
    				ans*=(a[i].first-a[i-1].first);
    				ans%=MOD;
    		 	}
    		}
    		cout<<ans<<endl;;
     	}
    	return 0;
    }
        