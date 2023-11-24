#include <bits/stdc++.h>
using namespace std;

class MyClass{
    private:
    int age;
    string my_name;
    public:
    void setValue(int x, string y){
        age = x;
        my_name = y;
    };
    void getValue(){
        cout << age << endl << my_name << endl;
    }
};
int main(){
    MyClass jagadish;
    jagadish.setValue(26, "Jagadish Chakma");
    jagadish.getValue();
    return 0;
}