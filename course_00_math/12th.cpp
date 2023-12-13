#include <bits/stdc++.h>
using namespace std;
int main(){
    int th = 0;
    int n = 1;
    while(1){
        int f = 0;
        for (int i = 1; i <= n; i++)
        {
            if(n%i == 0) f++;
        }
        if(f == 2) th++;
        if(th == 12){
            cout << n << endl;
            break;
        }
        n++;
        
    }
    return 0;
}