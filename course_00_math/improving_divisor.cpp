#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int count_d = 0;
    for (int i = 2; i <= n/2; i++)
    {
        if(n%i == 0) count_d++;
    }
    cout << count_d;
    return 0;
}