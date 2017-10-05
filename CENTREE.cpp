#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int n,b;
		cin>>n>>b;

		if(n==2){
			if(b==1)
				printf("YES\n1 2\n");
			else
				printf("NO\n");
		}
		else if(4*b>n)
			printf("NO\n");
		else{
			printf("YES\n");
			for(int i=0;i<2*b;i++)
				printf("%d %d\n",i+1,i+2 );
			for(int i=2*b;i<n-1;i++)
				printf("%d %d\n",2*b+1,i+2 );
		}
		
	}
	return 0;
}