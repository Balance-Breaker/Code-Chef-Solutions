#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		double u,v,x;
		cin>>u>>v>>x;
		printf("%.10lf\n",x/(u+v) );
	}
	return 0;
}