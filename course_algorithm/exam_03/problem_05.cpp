#include<bits/stdc++.h>
using namespace std;

const int N = 1003;
char mattr[N][N];
bool vis[N][N];
pair<int,int> parent[N][N];
int n, m;
vector<pair<int, int>> d = {{0,1},{0,-1},{-1,0},{1,0}};

bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m) return false;
    else return true;
}

void bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        int row = cur.first;
        int col = cur.second;
        for(int i = 0; i < 4; i++){
            int ci = row + d[i].first;
            int cj = col + d[i].second;
            if(valid(ci, cj) && vis[ci][cj] == false && (mattr[ci][cj] == '.' || mattr[ci][cj] == 'D')){
                q.push({ci, cj});
                vis[ci][cj] = true;
                parent[ci][cj] = cur;
            }
            
        }
    }
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mattr[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            parent[i][j] = {-1,-1};
        }
    }
    pair<int,int> d;
    pair<int,int> s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mattr[i][j] == 'R'){
                s = {i,j};
                bfs(i,j);
            }
            if(mattr[i][j] == 'D'){
                d = {i,j};
            }
        }
    }
    while(1){
        d = parent[d.first][d.second];
        if(d.first == -1) break;
        if(mattr[d.first][d.second] == '.'){
             mattr[d.first][d.second] = 'X';
        }
       
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << mattr[i][j];
        }
        cout << endl;
    }
    return 0;
}
