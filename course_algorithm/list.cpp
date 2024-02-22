#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,e;
    cin >> n >> e;
    vector<int> arr[n];
    while(e--){
        int a,b;
        cin >> a >> b;
        arr[a].push_back(a);
        arr[b].push_back(b);
    }
    return 0;
}