#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int a,b,c;
		cin>>a>>b>>c;
		if(c%2==1)
			a=a*2;
		int res=(int)(max(a,b)/min(a,b));
		cout<<res<<endl;
	}
	return 0;
}