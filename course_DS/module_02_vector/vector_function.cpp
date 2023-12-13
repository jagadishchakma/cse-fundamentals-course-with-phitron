#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a;
    a.push_back(23);
    a.push_back(32);
    a.resize(10);
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    
    
    return 0;
}