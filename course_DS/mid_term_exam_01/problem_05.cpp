#include <bits/stdc++.h>
using namespace std;

int main(){
    list<int> mylist;
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int x,v;
        cin >> x >> v;
        if(x == 0){
            mylist.push_front(v);
            cout << "L -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            mylist.reverse();
            cout << "R -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            mylist.reverse();
            
           
        }else if(x == 1){
            mylist.push_back(v);
            cout << "L -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            mylist.reverse();
            cout << "R -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            mylist.reverse();
           
        }else if(x == 2){
            if(mylist.size() > v){
                mylist.erase(next(mylist.begin(),v));
            }
            cout << "L -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            mylist.reverse();
            cout << "R -> ";
            for (auto it = mylist.begin(); it != mylist.end(); it++)
            {
                cout << *it << " ";
            }
            cout << endl;
            mylist.reverse();
            
        }
    }
    
    return 0;
}