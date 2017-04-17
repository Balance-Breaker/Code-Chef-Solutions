#include<bits/stdc++.h>

using namespace std;

int main()
{
    	int testcases;
    	
    	scanf("%d",&testcases);
    	while(testcases--)
    	{   
    	    int n;
    		int one=0;
    		int num;
    		scanf("%d",&n);
    		for(int i=0;i<n;i++)
    		{
    		    scanf("%d",&num);
    		    if(num==1)
    		        one++;
    		}
    		if(one%2==1)
    		cout<<one<<endl;
    		else
    		cout<<(n-one)<<endl;
    	}
    	return 0;
    } 