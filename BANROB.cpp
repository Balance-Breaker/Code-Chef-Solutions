#include<bits/stdc++.h>
 using namespace std;
 double fastPower(double base,int power)
{
    if(power==0)
       return 1;
    if(power==1)
    return base;
    double halfn=fastPower(base,power/2);
    if(power%2==0)
        return ( halfn * halfn ) ;
    else
        return ( ( halfn * halfn )  * base ) ;
}
int main()
 {
 	int testcases;
 	scanf("%d",&testcases);
 	while(testcases--){
 		int time;
 		double p;
 		scanf("%d",&time);
 		scanf("%lf",&p);
 		double pm= fastPower((-p),time);
 		double val=1e9*((1-pm)/(1+p));
 		double second=1e9-val;
 		cout.precision(13);
 		cout<<val<<" "<<second<<endl;

 	}
 	return 0;
	
}
