#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a;
	int n;
	int k;
	scanf("%lld%d%d",&a,&n,&k);
	++n;
	long long int reacter[k]={0};
	reacter[0]=a;
	for(int i=0;i<k-1;i++){
		reacter[i+1]=reacter[i]/n;
		reacter[i]=reacter[i]%n;
	}
	reacter[k-1]=reacter[k-1]%n;
	for(int i=0;i<k;i++){
		printf("%lld ",reacter[i] );
	}	
	printf("\n");

	return 0;
}