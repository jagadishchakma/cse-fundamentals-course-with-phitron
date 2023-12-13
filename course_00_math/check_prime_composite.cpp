#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cin >> num;
    int f = 0;
    for (int i = 1; i <= num; i++)
    {
        if(num%i == 0){
            cout << i << endl;
            f++;
        }
    }
    if(f > 2) cout << "Composite Number";
    else if(f == 2) cout << "Prime Number";
    else cout << "Special Number";
    return 0;
}