#include <bits/stdc++.h>
using namespace std;
const long long MAX = 1e18;
const int N = 10001;
vector<pair<int, long long>> graph[N];
long long dist[N];
class cmp{
public:
    bool operator()(pair<int, long long> a, pair<int, long long> b){
        return a.second > b.second;
    }
};
void dijkstra(int s) {
    priority_queue<pair<int, long long>, vector<pair<int, long long>>, cmp> pq;
    dist[s] = 0;
    pq.push({s, 0});
    while(!pq.empty()) {
        pair<int, long long> parrent = pq.top();
        pq.pop();
        int parrentNode = parrent.first;
        long long parrentCost = parrent.second;
        if (parrentCost > dist[parrentNode]) {
            continue;
        }
        for (pair<int, long long> child : graph[parrentNode]) {
            int childNode = child.first;
            long long childCost = child.second;
            if (parrentCost + childCost < dist[childNode]) {
                dist[childNode] = parrentCost + childCost;
                pq.push({childNode, dist[childNode]});
            }
        }
    }
}

int main() {
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        graph[a].push_back({b, w});
    }
    int s;
    cin >> s;

    for(int i = 1; i < N; i++){
        dist[i] = MAX;
    }
    dijkstra(s);
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int d;
        long long dw;
        cin >> d >> dw;
        if (dist[d] <= dw) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
