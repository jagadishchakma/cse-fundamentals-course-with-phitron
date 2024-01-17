#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string, int> mp;
    mp["one"] = 1;
    mp["two"] = 2;
    mp["three"] = 3;
    mp["four"] = 4;
    for (auto it = mp.begin(); it != mp.end(); it++)
    {
        cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}