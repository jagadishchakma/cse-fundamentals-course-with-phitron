#include <bits/stdc++.h>
using namespace std;
vector<int> arr[1005];
bool vis[1005];
int level[1005];
void bfs(int src){
    queue<int> q;
    q.push(src);
    vis[src] = true;
    level[src] = 0;
    while(!q.empty()){
        int parent = q.front();
        q.pop();
        cout << parent << endl;
        for(int child : arr[parent]){
            if(vis[child] == false){
                q.push(child);
                vis[child] = true;
                level[child] = level[par]+1;
            }
        }
    }
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
    int src;
    cin >> src;
    memset(vis,false,sizeof(vis));
    bfs(src);
    return 0;
}