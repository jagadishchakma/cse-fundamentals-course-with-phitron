#include <bits/stdc++.h>
using namespace std;

int main(){
    // divisibility check using reminder
    int dividend;
    int divisor;
    cin >> dividend >> divisor;
    if(dividend%divisor == 0) cout << "divisible by " << divisor << endl;
    else cout << "Not divisible by " << divisor << endl;
    // divisibility check using division
    
    cout << double(dividend)/divisor;
    return 0;
}