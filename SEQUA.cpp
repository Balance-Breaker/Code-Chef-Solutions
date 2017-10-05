#include <bits/stdc++.h>
using namespace std;
long long int power(long long int a,long long int b,long long int m){
	if(b==0)
		return 0;
	long long int p=power(a,b/2,m);
	p=(p*p)%m;
	if(b&1)
		p=(p*a)%m
	return p;
}
long long int bigsum(long long int a,long long int b,long long int m){
	if(b==0)
		return 0;
	if(b&1){
		sum=bigsum((a%m*a%m)%m,(b-1)/2,m);
		sum=(sum+((a%m)*(sum))%m)%m;
		sum=(1+((a%m)*sum)%m)%m;
	}
	else{
		sum=bigsum((a%m*a%m)%m,b/2,m);
		sum=(sum+((a%m)*(sum))%m)%m;
	}
	return sum%m;
}
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		long long int n,m;
		cin>>n>>m;
		long long int ans=0;
		for(int i=1;i<=min(n,m);i++){
			int k=(n-1)/m;
			if(i==1)
				ans+=(k+1);
			else
				ans=(ans+(power(i,i,m)*bigsum(power(i,m,m),k+1,m))%m)%m;
		}
		cout<<(ans+1)%m<<endl;
	}
	return 0; 
}