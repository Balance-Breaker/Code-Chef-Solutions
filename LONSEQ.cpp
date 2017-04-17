#include<bits/stdc++.h>

using namespace std;

int main()
{
    	int testcases;
    	
    	scanf("%d",testcases);
    	while(testcases--)
    	{   
    	    string str;
    		int one=0,zero=0;
    		cin>>str;
    		for(int i=0;i<str.length();i++)
    		{
    			if(str[i]=='0')
    			zero++;
    			else
    			one++;
    		}
    		if(zero==1 || one==1)
    		cout<<"Yes\n";
    		else
    		cout<<"No\n";
    	}
    	return 0;
    } 
