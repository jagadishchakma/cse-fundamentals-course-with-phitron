#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
vector<pair<int,int>> graph[N];
int dist[N];
class cmp{
    public:
    bool operator()(pair<int,int> a, pair<int,int> b){
        return a.second > b.second;
    }
};
void dijkstra(int s){
    priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
    pq.push({s,0});
    dist[s] = 0;
    while(!pq.empty()){
        pair<int,int> parent = pq.top();
        pq.pop();
        int node = parent.first;
        int cost = parent.second;
        for(pair<int,int> child : graph[node]){
            int childNode = child.first;
            int childCost = child.second;
            if(cost+childCost < dist[childNode]){
                // path relax
                dist[childNode] = cost + childCost;
                pq.push({childNode,dist[childNode]}); 
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