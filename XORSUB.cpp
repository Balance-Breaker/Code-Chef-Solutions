#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin >>testcases;
    while(testcases--){
        int n,k,ar[100000];
        cin>>n>>k;
        for(int i=1;i<=n;i++){
            cin>>ar[i];
        }
        
        int dp[n+4][1025];
        memset(dp,0,sizeof(dp));
        dp[0][0]=1;
        for(int i=1;i<=n;i++){
            for(int j=0;j<1024;j++){
                dp[i][j]=dp[i-1][j]|dp[i-1][j^ar[i]];
            }
        }
        int ans=-1;
        for(int i=0;i<=1024;i++){
            ans=max(ans,dp[n][i]*(i^k));
        }
        cout<<ans<<endl;
    }
    return 0;
}
