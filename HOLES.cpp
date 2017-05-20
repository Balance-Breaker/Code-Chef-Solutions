#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		string str;
		int res=0;
		cin>>str;
		for(int i=0;i<str.length();i++){
			switch(str(i)){
				case 'A':res++;
				case 'D':
				case 'O':
				case 'P':
				case 'R':
				case 'Q':res++;
						break;
				case 'B':res+=2;
				break;
				
				default :break;
			}
			printf("%d\n",res );
		}
	}
	return 0;
}