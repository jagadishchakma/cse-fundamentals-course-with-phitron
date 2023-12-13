#include <bits/stdc++.h>
using namespace std;
void fun(int* &b){
    b = NULL;
}
int main(){
    int a = 34;
    int* b = &a;
    fun(b);
    cout << b << endl;
    return 0;
}