    #include<bits/stdc++.h>
    using namespace std;
    int main(){
    	int testcases;
    	scanf("%d",&testcases);
    	while(testcases--){
    		int actions;
    		int sum=0;
    		scanf("%d",&actions);
    		string origin;
    		cin>>origin;
    		int totalladdus=0;
    		while(actions--){
    			string temp;
    			cin>>temp;
    			if(temp=="CONTEST_WON"){
    				int rank;
    				scanf("%d",&rank);
    				sum=sum+300+((rank>20)?0:(20-rank));
    			}
    			if(temp=="TOP_CONTRIBUTOR"){
    				sum=sum+300;
    			}
    			if(temp=="BUG_FOUND"){
    				int level;
    				scanf("%d",&level);
    				sum=sum+level;
    			}
    			if(temp=="CONTEST_HOSTED")
    			{
    				sum=sum+50;
    			}
     
    		}
    		if(origin=="INDIAN")
    				printf("%d\n",(sum/200) );
    			else
    				printf("%d\n",(sum/400) );
     
    	}
    	return 0;
    } 
