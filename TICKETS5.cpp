#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	scanf("%d",&testcases);
	while(testcases--){
		string str;
		bool flag=true;
		scanf("%s",&str);
		char a=str[0];
		char b=str[1];
		if(a!=b)
			flag=false;
		for(int i=2;i<str.length();i++)
		{
			if(i%2==0&&str[i]!=a)
				flag=false;
			if(i%2!=0&&str[i]!=b)
				flag=false;
		}
		if(flag)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}