#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
    int roll;
    string name;
    MyClass(int roll, string name){
        this->roll = roll;
        this->name = name;
    }
};
MyClass* fun(){
    MyClass* a = new MyClass(26, "Jagadish Chakma");
    return a;
};
int main(){
    MyClass* jagadish = fun();
    cout << jagadish->roll << (*jagadish).name;
    return 0;
}