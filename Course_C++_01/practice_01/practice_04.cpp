#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        mx = max(mx,a[i]);
    }
    cout << mx;
    
    return 0;
}