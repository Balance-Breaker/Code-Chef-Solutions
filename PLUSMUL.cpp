    #include<bits/stdc++.h>
    using namespace std;
    const long long MOD = 1e9+7;
    int main()
    {
        int testcases;
         scanf("%d", &testcases);
       while(testcases--)
        {
            int n; scanf("%d", &n);
            long long sum = 0, mul = 1, stor = 0, curr = 1;
            long long start; scanf("%lld", &start);
            sum = start; mul = start;
            long long res = start;
            for(int i = 2; i <= n; i++)
            {
                long long x; scanf("%lld", &x);
                long long temp = sum + x*curr;
                sum += x*curr; mul *= x;
                res = (sum+mul+stor)%MOD; sum = res;
                mul += x*curr; stor += (temp-x*curr);
                curr <<= 1;
                sum %= MOD; mul %= MOD; stor %= MOD; curr %= MOD;
            
            }
            printf("%lld\n", res);
        }
        return 0;
    }
