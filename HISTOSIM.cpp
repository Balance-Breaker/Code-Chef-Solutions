#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		string p,q;
		cin>>p>>q;
		if(p.length()!=q.length()){
			printf("NO\n");
			continue;
		}
		int ar[300];
		for(int i=0;i<300;i++){
			ar[i]=-1;
		}
		bool flag=true;
		for(int i=0;i<p.length();i++){
			if(ar[(int)p[i]]==-1){
				ar[(int)p[i]]=(int)q[i];
			}
			else if(ar[(int)p[i]]!=(int)q[i])
			{
				flag=false;
			}
		}
		int br[300];
		for(int i=0;i<300;i++){
			br[i]=-1;
		}
		for(int i=0;i<p.length();i++){
			if(br[(int)q[i]]==-1){
				br[(int)q[i]]=(int)p[i];
			}
			else if(br[(int)q[i]]!=(int)p[i])
			{
				flag=false;
			}
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");

	}
	return 0;
}