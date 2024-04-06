#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n){
    if(n == 0 || n == 1) return n;
    int res = fibonacci(n-1) + fibonacci(n-2);
    return res;
}
int main(){
    int n;
    cin >> n;
    int result = fibonacci(n);
    cout << result;
    return 0;
}