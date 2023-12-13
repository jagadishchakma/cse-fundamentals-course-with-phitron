#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long b[n];
    b[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        b[i] = a[i]+b[i-1];
    }
    sort(b,b+n,greater<long long>());
    for (int i = 0; i < n; i++)
    {
        cout << b[i] << " ";
    }
    
    
    return 0;
}