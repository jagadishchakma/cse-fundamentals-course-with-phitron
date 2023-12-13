#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> b = {6,7,8,9};
    vector<int>:: iterator it;
    for(it = b.begin(); it < b.end(); it++){
        cout << *it << " ";
    }
    
    return 0;
}