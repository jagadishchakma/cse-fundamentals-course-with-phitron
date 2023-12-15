#include <bits/stdc++.h>
using namespace std;
int main(){
    list<int> list1 = {1,2,7,4,5, 5, 3};
    list1.push_back(100);
    list1.push_front(200);
    list1.pop_back();
    list1.pop_front();
   
    cout << *next(list1.begin(),3);
    
    for (int a:list1)
    {
       cout << a << endl;
    }
    
    return 0;
}