#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		int m,n;
		scanf("%d%d",&m,&n);
		int res=(m-1)*n+(n-1)*m;
		printf("%d\n",res);

	}
	return 0;
}