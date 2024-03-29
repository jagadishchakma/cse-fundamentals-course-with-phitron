#include <bits/stdc++.h>
using namespace std;
const int N = 1e5+5;
int parent[N];
int group_size[N];
int level[N];
// dsu initialization
void dsu_init(int n){
    for(int i=0; i<n; i++){
        parent[i] = -1;
        group_size[i] = 1;
        level[i] = 0;
    }
}
// dsu find
int dsu_find(int node){
    if(parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}
// dsu union
void dsu_union(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    parent[leaderA] = leaderB;
}
// dsu union by size
void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        group_size[leaderA] += group_size[leaderB]; 
    }else{
        parent[leaderA] = leaderB;
        group_size[leaderB] += group_size[leaderA];
    }
}

// dsu union by level
void dsu_union_by_level(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderB = dsu_find(node2);
    if(level[leaderA] > level[leaderB]){
        parent[leaderB] = leaderA;
    }else if(level[leaderB] > level[leaderA]){
        parent[leaderA] = leaderB;
    }else{
        parent[leaderA] = leaderB;
        level[leaderB]++;
    }
}
int main(){
    dsu_init(7);
    dsu_union_by_level(1,2);
    dsu_union_by_level(2,3);
    dsu_union_by_level(4,5);
    dsu_union_by_level(5,6);
    dsu_union_by_level(1,4);
    cout << dsu_find(1) << endl;
    cout << dsu_find(4) << endl;
    return 0;
}