#include <bits/stdc++.h>
using namespace std;
const long long N = 1e6+6;
long long dp[N];
long long fibonacci(long long n){
    if(n == 0 || n == 1) return n;
    if(dp[n] != -1) return dp[n];
    long long res = fibonacci(n-1)+fibonacci(n-2);
    dp[n] = res;
    return res;
}
int main(){
    long long n;
    cin >> n;
    memset(dp,-1,sizeof(dp));
    long long result = fibonacci(n);
    cout << result;
    return 0;
}