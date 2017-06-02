#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		string t;
		cin>>t;
		int snake=0;
		int mongoose=0;
		int n=t.length();;
		for(int i=0;i<n;i++){
			if(i+1==n){
				if(t[i]=='s')
					snake++;
				else
					mongoose++;
			}
			else if(t[i]!=t[i+1])
			{
				mongoose++;
				i++;
			}
			else if(t[i]=='s')
				snake++;
			else
				mongoose++;
		}
		if(snake>mongoose)
			printf("snakes\n");
		if (mongoose>snake)
			printf("mongooses\n");
		if(snake==mongoose)
			printf("tie\n");
	}
	return 0;
}