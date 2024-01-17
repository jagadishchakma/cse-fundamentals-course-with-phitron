#include <bits/stdc++.h>
using namespace std;
bool cmp(pair<string, int> str, pair<string, int> val) {
    if (str.first != val.first) {
        if(str.first < val.first) return true;
        else return false;
    }else{
        if(str.second > val.second) return true;
        else return false;
    }
}

int main() {
    vector<pair<string, int>> vc;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
       string str;
       int val;
       cin >> str >> val;
       vc.push_back({str,val});
    }
    sort(vc.begin(), vc.end(), cmp);
    for (auto it=vc.begin(); it != vc.end(); it++) {
        cout << it->first << " " << it->second << endl;
    }

    return 0;
}
