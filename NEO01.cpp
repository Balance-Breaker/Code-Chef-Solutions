    #include<bits/stdc++.h>
    using namespace std;
    bool compare(int i , int j ){
        return i>j;
    }
    int main(){
        int testcases;
        cin>>testcases;
        while(testcases--){
            int n,temp,seq=0;
            long long int sum=0;
            cin>>n;
            vector<int> ar ;
            for(int i=0;i<n;i++){
                cin>>temp;
                if(temp>=0){
                    seq++;
                    sum+=temp;
                }
                else
                    ar.push_back(temp);
                    
            }
        sort(ar.begin(),ar.end(),compare);
        long long int ans =seq*sum;
        for(int i=0;i<ar.size();i++){
            if(ar[i]+ans<=(sum+ar[i])*(seq+1)){
                sum=sum+ar[i];
                seq++;
                ans=sum*seq;
            }
            else{
            for(int j=i;j<ar.size();++j)
                ans=ans+ar[j];
                
                break;
            }
        }
       cout << ans << endl;
    }
    return 0;
    } 
