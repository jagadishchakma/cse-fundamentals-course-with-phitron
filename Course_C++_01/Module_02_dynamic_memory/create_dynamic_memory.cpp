#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int *fun(){
    int a = 10;
    return &a;
}

int main(){
    int *a = fun();
    cout << "main: " << a << endl;
    
    return 0;
}