#include<bits/stdc++.h>
using namespace std;

int main()
{
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		string str;
		cin>>str;
		int l=str.length();
		 int mid=(l/2+(l%2==0?0:1));
                string a=str.substr(0,l/2);
                string b=str.substr(mid,l/2);
                sort(&a[0],&a[0]+a.length());
                sort(&b[0],&b[0]+b.length());

                if(a==b)
                        printf("YES\n");
                else
                        printf("NO\n");

	}
	return 0;
}