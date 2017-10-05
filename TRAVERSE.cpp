#include <bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int x=0,y=0,m=0;
		cin>>m;
	    while(m>2){
	        m=m-3;
	        x++;
	        y++;
	        y++;
	    }
	    if(m>0)
	    x++;
	    if(m>1)
	    y++;
	    cout<<x<<" "<<y<<endl;
	}
	return 0;
}