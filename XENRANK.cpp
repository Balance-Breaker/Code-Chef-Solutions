#include<bits/stdc++.h>
using namespace std;
int main(){
    int testcases;
    cin>>testcases;
    while(testcases--){
        int u,v;
        cin>>u>>v;
        long long int a,b,c,d=0;
        a=u+v;
        c=a+1;
        d=c*(c+1)/2;
        cout<<d-v <<endl;
        
    }
    return 0;
} 
