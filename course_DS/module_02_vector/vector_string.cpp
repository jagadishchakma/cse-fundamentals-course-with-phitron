#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    cin.ignore();
    vector<string> name(n);
    for (int i = 0; i < n; i++)
    {
        getline(cin,name[i]);
    }
    for (string na:name)
    {
        cout << na << endl;
    }
    
    return 0;
}