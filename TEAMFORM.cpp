#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int n,m;
		cin>>n>>m;
		int temp;
		for(int i=0;i<m;i++){
			cin>>temp>>temp;
		}
		if(n%2==0)
			printf("yes\n");
		else
			printf("no\n");
	}
	return 0;
}