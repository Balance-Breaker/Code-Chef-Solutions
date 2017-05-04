#include<bits/stdc++.h>
using namespace std;
int main()
{
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		long long int res = 0;
		long long int n,b,m;
		scanf("%lld%lld%lld",&n,&b,&m);
		while (n) {
			long long int problems = (n + 1) / 2;
			res += problems * m;
			n -= problems;
			if (n) {
				res += b;
			}
			m = m * 2;
		}
		printf("%lld\n",res );
	}
	return 0;
}