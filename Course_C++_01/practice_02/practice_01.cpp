#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin,s);
    stringstream s_stream;
    s_stream << s;
    int count = 0;
    string s_word;
    while (s_stream >> s_word)
    {
       for (int i = 0; s_word[i] != '\0'; i++)
       {
         if(s_word[i] >= 65 && s_word[i] <= 91){
            count++;
            break;
         }else if(s_word[i] >= 97 && s_word[i] <= 122){
            count++;
            break;
         }
       }
        
    }
    cout << count << endl;
    return 0;
}