#include <bits/stdc++.h>
using namespace std;
class Edge{
    public:
    int u,v;
    long long c;
    Edge(int u, int v, long long c){
        this->u = u;
        this->v = v;
        this->c = c;
    }
};
const int N = 1001;
const long long INF = 1e18;
long long dist[N];
int main(){
    int n,e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while(e--){
        int u,v;
        long long c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u,v,c));
    }
    for(int i = 1; i <= n; i++){
        dist[i] = INF;
    }
    // ok
    int s;
    cin >> s;

    dist[s] = 0;
    for(int i = 1; i <= n-1; i++){
       for(Edge ed : EdgeList){
            int u,v,c;
            u=ed.u;
            v=ed.v;
            c=ed.c;
            if(dist[u] < INF && dist[u]+c < dist[v]){
                dist[v] = dist[u]+c;
            }
        }
    }
    bool cycle = false;
    for(Edge ed : EdgeList){
        int u,v;
        long long c;
        u=ed.u;
        v=ed.v;
        c=ed.c;
        if(dist[u] < INF && dist[u]+c < dist[v]){
            cycle = true;
            break;
            dist[v] = dist[u]+c;
        }
    }
    if(!cycle){
        int t; // ok
        cin >> t;
        for(int i = 0; i < t; i++){
            int d;
            cin >> d;
            if(dist[d] == INF) cout << "Not Possible" << endl;
            else cout << dist[d] << endl;
        }
    }else{
        cout << "Negative Cycle Detected" << endl;
    }
    
    
    return 0;
}