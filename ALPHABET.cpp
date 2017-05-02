#include<bits/stdc++.h>
using namespace std;
int main(){
    int i,j,k,n;
	char str[27];
	cin>>str>>n;
	char word[n][13];
	for ( i = 0; i < n; ++i)
		{
			cin>>word[i];
		}	
		for ( i = 0; i < n; ++i)
		{
			for ( j = 0; j < strlen(w[i]); j++)
			{
				for( k=0;k<strlen(str);k++)
					if(word[i][j]==str[k])
						break;
					if(k==strlen(str))
						break;
			}
			if(j==strlen(word[i]))
				printf("Yes\n");
			else
				printf("No\n");

		}
		return 0;
}