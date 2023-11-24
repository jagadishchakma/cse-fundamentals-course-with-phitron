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
int main(){
    MyClass jagadish(26, "Jagadish Chakma");
    cout << jagadish.name << endl;
    return 0;
}