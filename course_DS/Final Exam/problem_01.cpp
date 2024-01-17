#include <bits/stdc++.h>
using namespace std;
int main(){
   
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        list<int> mylist;
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
           int x;
           cin >> x;
           mylist.push_back(x);
        }
        mylist.sort();
        mylist.unique();
        for (auto it = mylist.begin(); it != mylist.end(); it++)
        {
           cout << *it << " ";
        }
        cout << endl;
        
    }
    
    return 0;
}