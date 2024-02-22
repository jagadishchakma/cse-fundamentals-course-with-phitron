#include <bits/stdc++.h>
using namespace std;
const int N = 10000;
char arr[N][N];
bool vis[N][N];
vector<pair<int,int>> d = {{0,1},{0,-1},{-1,0},{1,0}};
int n,m;
bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m) return false;
    else return true;
}

void dfs(int si, int sj){
    vis[si][sj] = true;

    for(int i=0;i< 4;i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] == false && arr[ci][cj] == '.'){
            dfs(ci,cj);
        }
    }
};
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    int s1, s2;
    cin >> s1 >> s2;
    int d1,d2;
    cin >> d1 >> d2;
    
    dfs(s1,s2);
    if(vis[d1][d2]) cout << "YES";
    else cout << "NO";
    return 0;
}