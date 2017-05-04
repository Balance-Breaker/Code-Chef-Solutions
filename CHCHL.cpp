#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		long long int n,m;
		scanf("%lld%lld",&n,&m);
		if((n*m)&1)
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}