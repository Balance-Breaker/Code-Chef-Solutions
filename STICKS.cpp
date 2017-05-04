#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		int n;
		scanf("%d",&n);
		int ar[n];
		for (int i = 0; i < n; ++i)
		{
			scanf("%d",&ar[i]);
		}
		bool max1=false;
		bool max2=false;
		int max1=0;
		int max2=0;
		sort(ar);
		for(int i=n-1;i>0&&!flag2;i--){
			if(ar[i]==ar[i-1]){
				if(!flag1)
				{
					flag1=true;
					max1=ar[i];
					ar[i-1]=0;
					ar[i]=0;
				}
				else if(!flag2)
				{
					flag1=true;
					max2=ar[i];
					ar[i-1]=0;
					ar[i]=0;
				}
			}
		}

		int area=max1*max2;
		if(area==0)
			printf("-1\n");
		else
			printf("%d\n",area );
	}
	return 0;
}