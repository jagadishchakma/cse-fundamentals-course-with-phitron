#include <bits/stdc++.h>
using namespace std;
int main(){
    int a[10] = {12,42,324,432,534,23,23,12,123,423};
    sort(a,a+10, greater<int>());
    for (int i = 0; i < 10; i++)
    {
        cout << a[i] << " ";
    }
    
    return 0;
}