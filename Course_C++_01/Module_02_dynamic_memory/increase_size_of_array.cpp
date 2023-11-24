#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int *fun(){
    int *a  = new int[3];
    return a;
}

int main(){
    int *a = fun();
    int *b = new int[3];
    for (int i = 0; i < 3; i++)
    {
        a[i] = i;
        b[i] = i;
    }
    delete[] a;
    a = new int[5];
    for (int i = 0; i < 3; i++)
    {
       a[i] = b[i];
    }
    delete[] b;
    a[3] = 30;
    a[4] = 59;
    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    
    

    
    return 0;
}