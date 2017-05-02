#include<bits/stdc++.h>
using namespace std;

long long int root(long long int n,long long int i)
{
	long long int k= (long long int)pow(n,1.0/i);
	if(pow(k+1,i)==n)
	return k+1;
	else
	return k;
}

int main(){
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
	long long int n;
	scanf("%lld",&n);
	if(n==0){
	printf("0\n");
	continue;
	}
	if(n==1)
	{
	printf("INFINITY\n");
	continue;
	}
	if(n=3)
	{
	printf("2\n");
	continue;
	}

	long long int a,b,res=0;

	for(int i;;++i){
	a=root(n,i);
	b=root(n/2,i);

	if(a==2){
	++res;
	break;
	}
	res+=(a-b);
	}
	printf("%lld\n",res);
	}
	return 0;
}