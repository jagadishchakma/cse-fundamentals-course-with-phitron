#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> h = {50,40,42,30,35,42,32,25,20,10};
    int x;
    cin >> x;
    h.push_back(x);
    int cur_index = h.size()-1;
    
    
   
    while (cur_index != 0)
    {
        int parent_idx = (cur_index-1)/2;
        if(h[parent_idx] < h[cur_index]) {
            swap(h[parent_idx],h[cur_index]);
            cur_index = parent_idx;
        }else{
            break;
        }
    }
    for (int val: h)
    {
        cout << val << " ";
    }
    
    return 0;
}