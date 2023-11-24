#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream s_stream;
    s_stream << s;
    string s_word;
    while (s_stream >> s_word)
    {
       sort(s_word.begin(),s_word.end()-1, greater<char>());
       cout << s_word << " ";
       
        
    }
    return 0;
}