#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
  	scanf("%d",&testcases);
  	while(testcases--){
    	string temp;
    	int res=0;
    	cin>>temp;
    	for(int i=0;i<temp.length();i++){
    		switch(temp.at(i)){
    			case 'A':
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
    		}
   		printf("%d\n",res );
   	}
} 
