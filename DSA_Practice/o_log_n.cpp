#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 1; i < n; i *= 5)
    {
       cin >> arr[i];
    }
    for (int i = 1; i < n; i *= 5)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}