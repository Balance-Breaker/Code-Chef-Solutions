#include<bits/stdc++.h>
using namespace std;

int main()
{
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		int N,K;
		scanf("%d%d",&N,&K);
		long long int sum=0;
		int temp=0;
		for(int i=0;i<N;i++){
			scanf("%d",&temp);
			sum=sum+temp;
		}
		if(sum%2==0&&K==1)
			printf("odd\n");
		else
			printf("even\n");
	}
	return 0;
}