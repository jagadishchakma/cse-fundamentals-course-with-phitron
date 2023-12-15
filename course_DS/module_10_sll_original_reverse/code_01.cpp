#include <bits/stdc++.h>
using namespace std;
int main(){
    // list<int> roll;
    // list<int> roll(10);
    // list<int> roll(10, 234);
    // list<int> roll1 = {1,2,3,4,5};
    vector<int> l = {1,2,3,4,5};
    list<int> roll(l.begin(),l.end());
    for (int item: roll)
    {
        cout << item << endl;
    }
    
    
   
    return 0;
}