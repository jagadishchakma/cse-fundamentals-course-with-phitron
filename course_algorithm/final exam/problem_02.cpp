#include<bits/stdc++.h>
using namespace std;
const int N = 100005;
int dp[N];
bool make_it(int cur, int des) {
    if(cur == des){
        return true;
    }
    if(cur > des){
        return false;
    }
    if(dp[cur] == 1){
        return false;
    }
    if(dp[cur] == 2){
        return true;
    }
    bool res1 = make_it(cur + 3, des);
    bool res2 = make_it(cur * 2, des); 
    if(res1 || res2){
        dp[cur] = 2;
        return true;
    }else{
        dp[cur] = 1;
        return false;
    }

}

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        memset(dp,-1,sizeof(dp));
        if(make_it(1, n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}
