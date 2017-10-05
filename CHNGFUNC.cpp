#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int A,B;
	cin>>A>>B;
	int ans=0;
	for(int i=1;i<=A+1;i++){
		int j=i+1;
		while(true){
			if(j*j-i*i<=B)
			{
				ans++;
				j++;
			}
			else
				break;
		}
		printf("%d\n",ans );

	}
	return 0;
}