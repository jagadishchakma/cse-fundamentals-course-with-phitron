#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
bool vis[N];
vector<int> graph[N];
bool res = false;
int parrArray[N]; // logic here
void bfs(int i){
    vis[i] = true;
    queue<int> q;
    q.push(i);
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        for(int child : graph[parent]){
            if(vis[child] && parrArray[parent] != child){ // logice here
                res = true;
            }
            if(!vis[child]){
                parrArray[child] = parent; // logic here
                q.push(child);
                vis[child] = true;
            }
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
            bfs(i);
        }
    }
    memset(vis,false,sizeof(vis));
    memset(parrArray,-1,sizeof(parrArray));
    if(res) cout << "Cycle Detected";
    else cout << "Cycle Not Found";
    return 0;
}