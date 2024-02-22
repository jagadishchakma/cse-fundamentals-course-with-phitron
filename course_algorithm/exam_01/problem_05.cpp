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
int dfs(int si, int sj){
    vis[si][sj] = true;
    
    int count = 1;
    for(int i=0;i< 4;i++){
        int ci = si+d[i].first;
        int cj = sj+d[i].second;
        if(valid(ci,cj) == true && vis[ci][cj] == false && arr[ci][cj] == '.'){
             int i = dfs(ci,cj);
             count += i;
        }
    }
    return count;
};
int main(){
    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> arr[i][j];
        }
    }
    vector<int> countAparts;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if (arr[i][j] == '.' && vis[i][j] == false) {
                int count = dfs(i, j);
                countAparts.push_back(count);
            }
        }
    }

    sort(countAparts.begin(), countAparts.end());
    if(countAparts.size() > 0){
        for(int room : countAparts){
            cout << room << " ";
        }
    }else {
        cout << "0";
    }
    
    return 0;
}