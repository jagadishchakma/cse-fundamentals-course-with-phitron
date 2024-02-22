#include <bits/stdc++.h>
using namespace std;
int main(){
    string sentence;
    getline(cin,sentence);
    string word;
    stringstream ss(sentence);
    while(ss >> word){
        cout << word;
    }
    return 0;
}