#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    scanf("%d",&testcases);
    while(testcases--)
    {
        int n;
        scanf("%d",&n);
        bool ar[101]={false};
        int k;
        
        for(int j=0;j<n;j++)
        {
            scanf("%d",&k);
            ar[k-1]=true;
        }
        int count=0;
        for(int j=0;j<101;j++)
        if(ar[j])
        count++;
        
       printf("%d\n",count);
    }

	return 0;
}

