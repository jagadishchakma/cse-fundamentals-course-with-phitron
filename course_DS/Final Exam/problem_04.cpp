#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        pq.push(x);
    }

    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int cm;
        cin >> cm;
        if(cm == 0){
            int x;
            cin >> x;
            pq.push(x);
            cout << pq.top() << endl;
        }
        if(cm == 1){
            if(!pq.empty()){
                cout << pq.top() << endl;
            }else{
                cout << "Empty" << endl;
            }
        }
        if(cm == 2){
            if(!pq.empty()){
                pq.pop();
                if(!pq.empty()){
                    cout << pq.top() << endl;
                }else{
                    cout << "Empty" << endl;
                }
            }else{
                cout << "Empty" << endl;
            }
        }
    }
    
    
    return 0;
}