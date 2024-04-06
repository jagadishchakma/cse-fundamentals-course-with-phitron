#include <bits/stdc++.h>
using namespace std;
const long long N = 1e5+5;
long long arr[N];
long long dp(long long n){
    if(n == 0 || n == 1) return n;
    if(arr[n] != -1) return arr[n];
    long long ans = dp(n-1) + dp(n-2);
    arr[n] = ans;
    return ans;
}
int main(){
    long long n;
    cin >> n;
    memset(arr,-1,sizeof(arr));
    cout << dp(n) << endl;
    return 0;
}