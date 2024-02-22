#include <bits/stdc++.h>
using namespace std;
char arr[1000][1000];
bool vis[1000][1000];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m) return false;
    else return true;
}
bool dfs(int si, int sj){
    vis[si][sj] = true;
    if(arr[si][sj] == 'B') return true;
    for(int i=0;i<m;i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] == false && arr[ci][cj] != '#'){
            if(dfs(ci,cj)) return true;
            
        }
    }
    return false;
};
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int si,sj;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(arr[i][j] == 'A'){
                si = i;
                sj = j;
                break;
            }
        }
    }
    bool check = dfs(si,sj);
    if(check) cout << "YES";
    else cout << "NO";
    return 0;
}