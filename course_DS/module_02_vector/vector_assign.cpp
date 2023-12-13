#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> a = {1,2,3,4,5};
    vector<int> b = {1,2,3};
   b.pop_back(10);
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << " ";
    }
    
    return 0;
}