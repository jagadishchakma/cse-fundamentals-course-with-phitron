#include <bits/stdc++.h>
using namespace std;

class MyClass{
   public: MyClass(){
        cout << "Constructor Function";
    };
    public: int age = 26;
};
int main(){
    MyClass jagadihs;
    cout << jagadihs.age << endl;
    return 0;
}