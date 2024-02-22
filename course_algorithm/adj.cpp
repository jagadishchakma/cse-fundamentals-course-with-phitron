#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin >> n >> e;
    int mattr[n][n];
    memset(mattr,0,sizeof(mattr));
    
    while(e--){
        int a,b;
        cin >> a >> b;
        mattr[a][b] = 1;
        mattr[b][a] = 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mattr[i][j] << " ";
        }
        
    }
    if(mattr[2][4] == 1) cout << "connection have";
    else cout << "connection not have";
    return 0;
}