#include <bits/stdc++.h>
using namespace std;
// parent array
const int N = 1e5+5;
int parent[N];
// initialization array at loading time
void dsu_init(int n){
    for(int i=0; i<n; i++){
        parent[i] = -1;
    }
    parent[1] = 3;
    parent[2] = 1;
}
// find leader
int dsu_find(int node){
    if(parent[node] == -1) return node;
    int leader = dsu_find(parent[node]);
    parent[node] = leader; // leader parent
    return leader;
}
int main(){
    dsu_init(4);
    cout << dsu_find(0) << endl;
    cout << dsu_find(1) << endl;
    cout << dsu_find(2) << endl;
    cout << dsu_find(3) << endl;
    return 0;
}