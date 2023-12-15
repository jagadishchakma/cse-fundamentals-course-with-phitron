#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> roll = {1,2,3,4,5};
    roll.resize(10,23);
    for (int item:roll)
    {
        cout << item << endl;
    }
    
    return 0;
}