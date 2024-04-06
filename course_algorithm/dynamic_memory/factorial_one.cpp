#include <bits/stdc++.h>
using namespace std;
int factorial(int n){
    if(n == 0) return 1;
    int chotoFactorial = factorial(n-1)*n;
    return chotoFactorial;
}
int main(){
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result;
    return 0;
}

// in this code I am trying to get 4 factorial or any n number of values.