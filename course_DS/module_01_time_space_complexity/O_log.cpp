#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for (int i = n; i > 0; i/=5)
    {
        cout << i << endl;
    }
    for (int i = 1; i < n; i*=3)
    {
        cout << i << endl;
    }
    
    return 0;
}