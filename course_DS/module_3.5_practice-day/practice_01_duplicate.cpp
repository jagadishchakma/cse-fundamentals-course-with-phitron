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
    
    sort(a,a+n);
    int mx = a[n-1];
    int cnt[mx+1] = {0};
    for (int i = 0; i < n; i++)
    {
        int v = a[i];
        cnt[v]++;
    }
    bool check = false;
    for (int i = 0; i <= mx; i++)
    {
      
        if(cnt[i] > 1) {
            check = true;
            break;
        }
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
    
    
    
    return 0;
}