#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
    int age;
    string my_name;
    void full_name(string my_full_name){
        cout << my_full_name << endl;
    }
};
int main(){
    MyClass jagadish;
    jagadish.full_name("Jagadish Chakma Babu");
    return 0;
}