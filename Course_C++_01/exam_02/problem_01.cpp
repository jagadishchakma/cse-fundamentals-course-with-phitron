#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    string s;
    string x;
    for (int i = 1; i <= t; i++)
    {
        cin >> s >> x;
        while(s.find(x) != EOF){
            s.replace(s.find(x),x.size(),"#");
        }
        cout << s << endl;

    }
    
    return 0;
}