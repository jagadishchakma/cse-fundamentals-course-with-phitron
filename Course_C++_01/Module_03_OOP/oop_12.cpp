#include <bits/stdc++.h>
using namespace std;

int fun1(){
    int a = 230;
    return a;
};

int fun2(func){
    return func();
};

int main(){
    int result = fun2(fun1);
    cout << result;
    return 0;
}