    #include<bits/stdc++.h>
    using namespace std;
    int main(){
        int testcases;
        cin>>testcases;
        while(testcases--){
            int n;
            cin>>n;
            for(int i=0,j=500;i<n;i++,j--){
                cout<<j<<" ";
            }
            cout<<endl;
        }
        return 0;
    } 
