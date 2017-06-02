#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int n;
		cin>>n;
		string str;
		cin>>str;
		bool head=false;
		bool tail=false;
		int res=true;
		for (int i = 0; i < n; ++i)
		{
			if(str[i]=='.')
				continue;
			else{
				if(str[i]=='H')
				{
					if (head)
					{
						res=false;
					}
					else
					{
						if(tail){

							tail=false;
						}
						head=true;
					}
				}
				if (str[i]=='T')
				{
					if(!head){
						res=false;
					}
					else
					{
						head=false;
						tail=true;
					}

				}
			}
		}
		if(head)
		res=false;
		if(res)
			printf("Valid\n");
		else
			printf("Invalid\n");
	}
	return 0;
}