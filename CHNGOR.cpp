#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int n;
		cin>>n;
		int temp;
		int res=0;
		for(int i=0;i<n;i++){
			cin>>temp;
			res=res|temp;
		}
		printf("%d\n",res );
	}
	return 0;
}