#include <bits/stdc++.h>
using namespace std;

class MyClass{
    public:
    int age;
    string my_name;
    MyClass(int age, string my_name){
        age = age;
        my_name = my_name;
        cout << age << endl << my_name << endl;
    }
};
int main(){
    MyClass jagadish(26, "Jagadish Chakma");
    return 0;
}