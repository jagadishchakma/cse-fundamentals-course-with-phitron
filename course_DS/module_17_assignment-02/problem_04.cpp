#include <bits/stdc++.h>
using namespace std;
int main(){
    queue<string> qu;
    int q;
    cin >> q;
    getchar();
    for (int i = 1; i <= q; i++)
    {
        string comm;
        getline(cin,comm);
        if(comm[0] == '0'){
            comm.replace(0, 2, "");
            qu.push(comm);
        }else{
            if(qu.empty()){
               cout << "Invalid" << endl;
            }else{
                cout << qu.front() << endl;
                qu.pop();
            }
            
        }
  
    }
    
    return 0;
}