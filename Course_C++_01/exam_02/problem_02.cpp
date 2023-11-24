#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    string word;
    bool check = false;
    while (ss >> word)
    {
       if(word == "Jessica"){
        check = true;
        break;
       }
    }
    if(check) cout << "YES";
    else cout << "NO";
    return 0;
}