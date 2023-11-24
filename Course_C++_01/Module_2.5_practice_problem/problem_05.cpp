#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int a, b, c;
    cin >> a >> b >> c;
    long long int max_value = max({a,b,c});
    long long int min_value = min({a,b,c});
    cout << min_value << " " << max_value << endl;
    return 0;
}