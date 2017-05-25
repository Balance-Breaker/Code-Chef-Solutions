#include<bits/stdc++.h>
using namespace std;
int main(){
	int testcases;
	cin>>testcases;
	while(testcases--){
		int Barca;
		int Mal;
		int Real;
		int Eib;
			for (int i = 0; i < 4; ++i)
		{
			string temp;
			int n;
			cin>>temp>>n;
			switch(temp[0]){
				case 'B': Barca=n;
						  break;
				case 'M' : Mal=n;
						  break;
				case 'R' :Real=n;
						  break;

				case 'E' :Eib=n;
						  break;
			}
		}


		if(Mal>Real&& Barca>Eib)
			printf("Barcelona\n");
		else
			printf("RealMadrid\n");
	}
		return 0;
}