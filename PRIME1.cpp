    #include<bits/stdc++.h>
    using namespace std;
    bool sieve[100018]={0};
    vector<int> primes;
     
    void pre(){
    	for(int i=2;i<(100018);i++){
    		if(!sieve[i]){
    			primes.push_back(i);
    			for(int j=2*i;j<100018;j+=i) sieve[j]=1;
    		}
    	}
    }
        
    int main(){    	
    	ios_base::sync_with_stdio(0);
    	cin.tie(0);
    	cout.tie(0);
     	int t;
     	pre();
     	cin>>t;
     	while(t--){
     		int n,m;
     		cin>>m>>n;
     		bool check[n-m+1]={0};
     		for(int i=0;i<primes.size()&&primes[i]<=n;i++){
     			int start;
     			if(m%primes[i]) start=primes[i]*((m/primes[i])+1);
     			else start=m;
     			for(int j=start-m;j<=n-m;j+=primes[i]){
     				if(j+m!=primes[i])check[j]=1;
     			}
     		}
     		for(int i=0;i<sizeof(check)/sizeof(bool);i++){
     			if(!check[i]&&m+i!=1) cout<<m+i<<endl;
     		}
     		cout<<endl;
     	}
       	return 0;
    } 
