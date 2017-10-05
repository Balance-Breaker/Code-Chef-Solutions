#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int x1,x2,y1,y2;
		cin>>x1>>y1>>x2>>y2;
		if(x1==x2){
			if(y2>y1)
				printf("up\n");
			else
				printf("down\n");
		}
		else if(y1==y2){
			if(x2>x1)
				printf("right\n");
			else
				printf("left\n");
		}
		else
			printf("sad\n");
	}
	return 0;
}