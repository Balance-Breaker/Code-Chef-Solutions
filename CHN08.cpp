    #include <iostream>
    using namespace std;
    #define mod 1000000007
    int main() {
        int fib(int a ,int b,int n);
        int testcases;
    	scanf("%ld",&testcases);
        while(testcases--){
            int a,b,n;
           scanf("%ld%ld%ld",&a,&b,&n);
            
            
            printf("%d\n",fib(a,b,n));
        }
        
    	return 0;
    }
    int fib(int a,int b,int n){
        int first=a;
        int second=b;
        int res;
        int cycles=n%6;
        switch(cycles){
            case 0:res=a-b;
                break;
            case 1:res=a;
            break;
            case 2: res=b;
            break;
            case 3:res=b-a;
            break;
            case 4:res= -a;
            break;
            case 5: res=-b;
            break;
        }
        res=res%mod;
        if(res<0)
         res=res+mod;
        return res;
    } 
