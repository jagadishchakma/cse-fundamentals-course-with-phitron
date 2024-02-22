#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector<int> graph[N];
bool res = false;
int parrArray[N]; // logic here
void dfs(int parent){
    vis[parent] = true;
    for(int child : graph[parent]){
        if(vis[child] && parrArray[parent] != child) res = true; // logic here
        if(!vis[child]){
            parrArray[child] = parent; // logic here
            dfs(child);
        }
    }
}
int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b;
        cin >> a >> b;
        graph[a].push_back(b);
        graph[b].push_back(a);
    }
    for(int i = 0; i < n; i++){
        if(!vis[i]){
            dfs(i);
        }
    }
    memset(vis,false,sizeof(vis));
    memset(parrArray,-1,sizeof(parrArray));
    if(res) cout << "Cycle Detected";
    else cout << "Cycle Not Found";
    return 0;
}