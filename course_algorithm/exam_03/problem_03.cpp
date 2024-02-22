#include<bits/stdc++.h>
using namespace std;

const int N = 1003;
char mattr[N][N];
bool vis[N][N];
int n, m;
vector<pair<int, int>> d = {{-1, 0}, {1, 0},{0, -1},{0, 1}};

bool valid(int ci, int cj){
    if(ci < 0 || ci >= n || cj < 0 || cj >= m) return false;
    else return true;
}

int bfs(int si, int sj){
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    int count = 1;
    while(!q.empty()){
        pair<int, int> cur = q.front();
        q.pop();
        int row = cur.first;
        int col = cur.second;
        for(int i = 0; i < 4; i++){
            int ci = row + d[i].first;
            int cj = col + d[i].second;
            if(valid(ci, cj) && vis[ci][cj] == false && mattr[ci][cj] == '.'){
                q.push({ci, cj});
                vis[ci][cj] = true;
                count++;
            }
        }
    }
    return count;
}

int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> mattr[i][j];
        }
    }
    memset(vis, false, sizeof(vis));
    int min_area = INT_MAX;
    bool haveOrNot = false;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(mattr[i][j] == '.' && vis[i][j] == false){
                int count =  bfs(i,j);
                if(min_area > count) min_area = count;
                if(haveOrNot == false) haveOrNot = true;
            }
        }
    }

    if(haveOrNot) cout << min_area;
    else cout << -1;

    return 0;
}
