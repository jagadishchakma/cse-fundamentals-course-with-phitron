#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        stack<char> st;
        string s;
        cin >> s;
        for (char c:s)
        {
            if(st.empty()){
                st.push(c);
            }else{
                if(c == '0' && st.top() == '1'){
                    st.pop();
                }else if(c == '1' && st.top() == '0'){
                    st.pop();
                }else{
                    st.push(c);
                }
            }
        }
        if(st.empty()){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
    }
    
    return 0;
}