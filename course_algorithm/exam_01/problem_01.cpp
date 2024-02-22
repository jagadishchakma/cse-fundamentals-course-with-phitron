#include <bits/stdc++.h>
using namespace std;
const int N = 1e6+6;
vector<int> arr[N];
void bfs(int a, int b){
    if(a == b){
        cout << "YES" << endl;
        return;
    }
    bool check = false;
    for(int child : arr[a]){
        if(child == b){
           check = true;
        }
    }
    if(check){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
};
int main(){
    int n,e;
    cin >>n>>e;
    while(e--){
        int a,b;
        cin >> a >> b;
        arr[a].push_back(b);
    }
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        bfs(a,b);
    }
    
    return 0;
}