#include <bits/stdc++.h>
using namespace std;

int main(){
    char str[100001];
    while(cin.getline(str,100001)){
        // print
        int len = strlen(str);
        sort(str, str+len);
        for (int i = 0; i < len; i++)
        {
            if (str[i] != ' ')
            {
                cout << str[i];
            }
            
        }
        
        cout << endl;
        
    }
}