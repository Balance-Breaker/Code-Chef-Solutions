#include <bits/stdc++.h>
 using namespace std;
 int main()
 {
 	int testcases;
 	scanf("%d",&testcases);
 	while(testcases--)
 	{
 		int temp=0;
 		int n;
 		int count0=0;
 		int count1=0;
 		int countm1=0;
 		scanf("%d",&n);
 		for (int i = 0; i < n; ++i)
 		{	
 			scanf("%d",&temp);
 			if(temp==1)
 				count1++;
 			if(temp==0)
 				count0++;
 			if(temp==-1)
 				countm1++;
 		}

 		if(n-count1-count0-countm1>1)
 			printf("no\n");
 		else if(n-count1-count0-countm1==1&&countm1>0)
 			printf("no\n");
 		else if (countm1>1&&count1==0)
 			printf("no\n");
 		else
 			printf("yes\n");
 		}
  	return 0;
}