#include <bits/stdc++.h>
using namespace std;
const int N = 1e3+3;
vector<int> arr[N];
void bfs(int x){
    if(arr[x].empty()){
        cout << "-1" << endl;
        return;
    }
    sort(arr[x].begin(), arr[x].end(),greater<int>());
    for(int child : arr[x]){
        cout << child << " ";
    };
    cout << endl;
};
int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >>a>>b;
        arr[a].push_back(b);
        arr[b].push_back(a);
    }
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        bfs(x);
    }
    return 0;
}