#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int group_size[N];

void dsu_init(int n){
    for(int i = 1; i <= n; i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}
int dsu_find(int node){
    if (parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);

    if(leaderA == leaderB) return;
    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB];
    }
    else{
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

int countCycles(int n, vector<pair<int, int>> edge_list){
    int count = 0;
    for(pair<int,int> edge : edge_list){
        int a = edge.first;
        int b = edge.second;
        int leaderA = dsu_find(a);
        int leaderB = dsu_find(b);
        if (leaderA == leaderB)
            count++;
        dsu_union_by_size(leaderA, leaderB);
    }
    return count;
}

int main(){
    int n, e;
    cin >> n >> e;
    vector<pair<int, int>> edge_list;
    while(e--){
        int a, b;
        cin >> a >> b;
        edge_list.push_back({a,b});
    }
    dsu_init(n);
    int result = countCycles(n, edge_list);
    cout << result << endl;
    return 0;
}
