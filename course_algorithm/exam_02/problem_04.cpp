#include <bits/stdc++.h>
using namespace std;
const long long INF = 1e18;
const int N = 100;
long long mattr[N][N];
int main() {
    int n, e;
    cin >> n >> e;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            mattr[i][j] = INF;
            if(i == j) mattr[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++) {
        int a, b;
        long long w;
        cin >> a >> b >> w;
        if(w < mattr[a][b]){
            mattr[a][b] = w;
        }
    }

    // floyd warshall
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (mattr[i][k] != INF && mattr[k][j] != INF) {
                    mattr[i][j] = min(mattr[i][j], mattr[i][k] + mattr[k][j]);
                }
            }
        }
    }

    int q;
    cin >> q;
    for (int i = 0; i < q; i++) {
        int x, y;
        cin >> x >> y;

        if (mattr[x][y] == INF) {
            cout << -1 << endl;
        } else {
            cout << mattr[x][y] << endl;
        }
    }

    return 0;
}
