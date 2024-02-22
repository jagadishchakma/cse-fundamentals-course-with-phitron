#include <bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
int parent[N];
int group_size[N];
void dsu_initialize(int n){
    for(int i=0; i<n; i++){
        parent[i] = -1;
        group_size[i] = 1;
    }
}

int dsu_find(int node){
    if(parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader;
    return leader;
}

void dsu_union_by_size(int node1, int node2){
    int leaderA = dsu_find(node1);
    int leaderA = dsu_find(node2);
    if(group_size[leaderA] > group_size[leaderB]){
        parent[leaderB] = leaderA;
        
    }
}

int main(){
    return 0;
}