    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int testcases;
    	scanf("%d",&testcases);
    	while(testcases--){
    		string str;
    		cin>>str;
    		int c=0,e=0,s=0;
    		bool flag=true;
    		for (int i = 0; i < str.length(); ++i)
    		{
    			if(str[i]=='C')
    				c++;
    			if(str[i]=='E')
    				e++;
    			if(str[i]=='S')
    				s++;
    			if(e>0&&str[i]=='C')
    				flag=false;
    			if(s>0&&str[i]!='S')
    				flag=false;
    		}
    		if(flag)
    			printf("yes\n");
    		else
    			printf("no\n");
    	}
    } 
