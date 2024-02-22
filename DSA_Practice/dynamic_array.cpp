#include <bits/stdc++.h>
using namespace std;
int main(){
    int* a = new int[10];
    int* b = new int[10];
    for (int i = 0; i < 10; i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    delete[] a;
    a = new int[14];
    for (int i = 0; i < 14; i++)
    {
        a[i] = b[i];
    }
    delete[] b;
    a[10] = 12;
    a[11] = 23;
    a[12] = 432;
    a[13] = 213;
    for (int i = 0; i < 14; i++)
    {
        cout << a[i] << " ";
    }
    
    
    
    return 0;
}