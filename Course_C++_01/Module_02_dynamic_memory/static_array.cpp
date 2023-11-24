#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *fun(){
    int a[5] = {1,2,3,4,5};
    return a;
}
int main(){
    int *a = fun();
    cout << a[0];
    return 0;
}