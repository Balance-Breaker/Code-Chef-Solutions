#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	scanf("%d",&testcases);
	while(testcases--)
		{
			string disha[4];
			string dishb[4];

			for(int i=0;i<4;i++){
				cin>>disha[i];
			}
			for (int i = 0; i < 4; ++i)
			{

				cin>>dishb[i];
			}

			int count=0;
			bool flag=true;
			for (int i = 0; i < 4; ++i)
			{
				for (int j = 0; j < 4; ++j)
				if(flag)
				{
					if(disha[i].compare(dishb[j])==0)
						{count++;
						flag=false;
						}
				}
				flag=true;
			}

			if(count>=2)
				printf("similar\n");
			else
				printf("dissimilar\n");

		}
	// your code goes here
	return 0;
}
