#include <bits/stdc++.h>
using namespace std;

int isprm(long long int n)
{
    long long int i=5, w=2;
    if(n==2 || n== 3)
     return 1;
     if(n%2==0 || n%3==0 || n==1)
        return 0;
     while(i*i<= n)
     {
         if(n%i ==0)
            return 0;
            i +=w;
            w=6-w;
     }
     return 1;
}

int main()
{   int testcases;
    scanf("%d",&testcases);
    while(testcases--){
    int i,j;
    scanf("%d%d",&i,&j);
    for(int i; i<j;i++)
    {
        if(isprm(i)==1)
            printf("%d\n",i);
    }
}
    return 0;
}