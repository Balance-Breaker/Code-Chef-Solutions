#include<bits/stdc++.h>
using namespace std;
int main()
{
  	int testcases;
   	scanf("%d",&testcases);
   	while(testcases--)
   	{
   		int n;
  		scanf("%d",&n);
   		bool flag=true;
   		string str[n];
   		for (int i = 0; i < n; ++i)
   		{
   			cin>>str[i];
   		}
   		for (int i = 0; i < n; ++i)
   		{	if(str[i]=="cookie")
   				if(i==n-1|| str[i+1]!="milk")
   					flag=false;
   		}
   		if(flag)
   			printf("YES\n");
   		else
   			printf("NO\n");
   	}
   	return 0;
    } 
