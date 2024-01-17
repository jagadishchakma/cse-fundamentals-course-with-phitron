#include <bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    map<string,int> mp;
    while (ss >> word)
    {
        mp[word]++;
        cout << word << endl;
    }
    for (auto  i = mp.begin(); i != mp.end(); i++)
    {
        cout << i->first << "=" << i->second << endl;
    }
    
    return 0;
}