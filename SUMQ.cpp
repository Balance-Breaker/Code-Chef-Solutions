        #include<bits/stdc++.h>
        using namespace std;
        #define MOD 1000000007
        int main(){
            std::ios::sync_with_stdio(false);
            int testcases;
            cin>>testcases;
            while(testcases--){
                int p,q,r;
                cin>>p>>q>>r;
                vector<int> ar=vector<int>(p);
                vector<int> br=vector<int>(q);
                vector<int> cr=vector<int>(r);
                for(int i=0;i<p;i++)
                    cin>>ar[i];
                for(int i=0;i<q;i++)
                    cin>>br[i];
                for(int i=0;i<r;i++)
                    cin>>cr[i];
                    
                    sort(ar.begin(),ar.end());
                    sort(br.begin(),br.end());
                    sort(cr.begin(),cr.end());
                    vector<int> sa(ar) ;
                for(int i=1;i<p;i++)
                    {
                        sa[i]=(sa[i]+sa[i-1]);
                        if(sa[i]>MOD)
                        sa[i]-=MOD;
                    }
                    vector<int> sc(cr);
                        for(int k=1;k<r;k++){
                            sc[k]=(sc[k]+sc[k-1]);
                            if(sc[k]>MOD)
                            sc[k]-=MOD;
                        }
                    int res=0;
                    long long int pa,pc;
                    for(int i=q-1;i>=0;--i)
    		{
    			pa = upper_bound(ar.begin(), ar.end(), br[i]) - ar.begin();
    			pc = upper_bound(cr.begin(), cr.end(), br[i]) - cr.begin();
    			if(pa == 0 || pc == 0)
    			    break;
    			res += (((pc * br[i])%MOD + sc[pc - 1])%MOD * ((pa * br[i])%MOD + sa[pa - 1])%MOD)%MOD;
    			res = res % MOD;
    }
                 cout<<res<<endl;  
         
            
        }
        return 0;
        }  
