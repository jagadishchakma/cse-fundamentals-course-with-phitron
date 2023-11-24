#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void my_function(int a, int b, string name){
    cout << a+b << endl;
    cout << name << endl;
}
int main(){
    int a=23, b=21;
    string name = "Jagadish Chakma";
    my_function(a,b,name);
    return 0;
}