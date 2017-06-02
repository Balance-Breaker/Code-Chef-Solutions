#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int n;
		cin>>n;
		int ar[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>ar[i];
		}
		bool flag=true;
		if(n%2==0)
			flag=false;
		else{
			for (int i = 0; i < n/2 ; ++i)
			{
				if(ar[i]!=i+1)
					flag=false;
			}
			for (int i = n-1; i >n/2; --i)
			{
				if(ar[i]!=n-i)
					flag=false;
			}
		}
			if(flag)
				printf("yes\n");
			else
				printf("no\n");
	}
	return 0;
}