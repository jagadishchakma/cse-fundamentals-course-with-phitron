#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string x;
        cin >> x;
        int sz = x.size();
        if(x.size() == 14){
            x.replace(6,13,"");
        }else if(x.size() == 13){
            x.replace(6,12,"");
        }else{
            x.replace(6,10,"");
        }
        

        if(sz > 12){
            if(x == "+88013" || x == "+88017" || x == "+88014" || x == "+88019" || x == "+88015" || x == "+88012" || x == "+88016" || x == "+88018"){
            cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }else{
            cout << "NO" << endl;
        }
        
    }
    return 0;
}
