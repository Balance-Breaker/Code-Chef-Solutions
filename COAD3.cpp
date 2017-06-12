#include<bits/stdc++.h>
using namespace std;
int main(){
    int ar[1001]={0};
    for(int i=1;i<=1000;i++){
        ar[i]=ar[i-1]+1;
        if(i%2==0){
            ar[i]=min(ar[i],ar[i/2]+2);
        }
    }
    int testcases;
    cin>>testcases;
    while(testcases--){
        int n;
        cin>>n;
        cout<<ar[n]<<endl;
    }
    return 0;
}
