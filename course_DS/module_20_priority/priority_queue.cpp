#include <bits/stdc++.h>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    while (1)
    {
        int cm;
        cin >> cm;
        if(cm == 0){
            int x;
            cin >> x;
            pq.push(x); // o logN
        }
        else if(cm ==1){
            pq.pop(); // o logN;
        }
        else if(cm == 2){
            cout << pq.top() << endl; // o(n)
        }
        else break;
    }
    
    return 0;
}