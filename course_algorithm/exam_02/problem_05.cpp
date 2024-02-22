#include<bits/stdc++.h>
using namespace std;
const int MAX_N = 100;
const int MAX_M = 100;
vector<pair<int, int>> dir = {{-1, -2},{-2, -1},{-2, 1},{-1, 2}, {1, 2},{2, 1}, {2, -1}, {1, -2}};
bool valid(int x, int y, int n, int m){
    if(x < 0 || x >= n || y < 0 || y >= m) return false;
    else return true;
}
int dist[MAX_N][MAX_M];
int bfs(int n, int m, pair<int, int> knight, pair<int, int> queen){
    queue<pair<int, int>> q;
    q.push(knight);
    dist[knight.first][knight.second] = 0;
    while(!q.empty()){
        pair<int, int> knight_curr = q.front();
        q.pop();
        int knight_cur_row= knight_curr.first;
        int knight_cur_col = knight_curr.second;
        if(knight_cur_row == queen.first && knight_cur_col == queen.second){
            return dist[knight_cur_row][knight_cur_col];
        }
        for(int i = 0; i < 8; i++){
            int next_row = knight_cur_row + dir[i].first;
            int next_col = knight_cur_col + dir[i].second;
            if(valid(next_row, next_col, n, m) && dist[next_row][next_col] == -1){
                dist[next_row][next_col] = dist[knight_cur_row][knight_cur_col] + 1;
                q.push({next_row, next_col});
            }
        }
    }

    return -1;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        pair<int, int> knight, queen;
        cin >> knight.first >> knight.second;
        cin >> queen.first >> queen.second;
        memset(dist, -1, sizeof(dist));
        int result = bfs(n, m, knight, queen);
        cout << result << endl;
    }

    return 0;
}
