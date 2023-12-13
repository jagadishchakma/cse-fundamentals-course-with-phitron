#include <bits/stdc++.h>
using namespace std;
void func(int* &b){
    b = NULL;
    cout << b;
}
int main(){
    int a = 10;
    int* b = &a;
    
    func(b);
    cout << b;
    return 0;
}