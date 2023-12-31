#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int n,m;
    cin >> n >> m;
    stack<int> st;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    queue<int> qu;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    

    if(st.size() != qu.size()){
        cout << "NO";
    }else{
       int flag = 1;
       for (int i = 1; i <= m; i++)
       {
        if(st.top() != qu.front()){
            flag = 0;
            break;
        }
        st.pop();
        qu.pop();
       }
       if(flag) cout << "YES";
       else cout << "NO";
       
    }
    
    return 0;
}