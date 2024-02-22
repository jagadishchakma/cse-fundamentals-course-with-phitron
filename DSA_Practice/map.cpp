#include <bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> mymap;
    mymap.insert({"one",1});
    mymap.insert({"two",2});
    mymap.insert({"three",3});
    mymap.insert({"four",4});
    mymap.insert({"five",5});
    mymap.insert({"sixe",6});
    mymap.insert({"seven",7});


    for (auto it=mymap.begin(); it != mymap.end(); it++)
    {
       cout << it->first << " " << it->second << endl;
    }
    
    return 0;
}