#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>> graph[N];
int dist[N];
void dijkstra(int s){
    queue<pair<int,int>> q;
    q.push({s,0});
    dist[s] = 0;
    while(!q.empty()){
        pair<int,int> parent = q.front();
        q.pop();
        int node = parent.first;
        int cost = parent.second;
        for(pair<int,int> child : graph[node]){
            int childNode = child.first;
            int childCost = child.second;
            if(cost+childCost < dist[childNode]){
                // path relax
                dist[childNode] = cost + childCost;
                q.push({childNode,dist[childNode]}); 
            }
        }
    }

}
int main(){
    int n,e;
    cin >> n >> e;
    while(e--){
        int a,b,c;
        cin >> a >> b >> c;
        graph[a].push_back({b,c});
        graph[b].push_back({a,c});
    }
    // memset(dist,INT_MAX,sizeof(dist));
    for(int i = 0; i < n; i++){
        dist[i] = INT_MAX;
    }
    dijkstra(0);
    for(int i =0; i < n; i++){
        cout << "See-> " << dist[i] << endl;
    }
    return 0;
}