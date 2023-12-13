#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int l = 1;
    int r = n;
    for (int i = 1; i <= n; i++)
    {
        if(l == r){
            for (int j = 1; j <= n; j++)
            {
                if(l == j){
                    cout << "X";
                }else{
                    cout << " ";
                }
            }
            
        }else{
            for (int j = 1; j <= n; j++)
            {
                if(l == j){
                    cout << "\\";
                }else if(r == j){
                    cout << "/";
                }else{
                    cout << " ";
                }
            }
        }
        cout << endl;
        
        l++;
        r--;
        
    }
    
    return 0;
}