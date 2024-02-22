#include <bits/stdc++.h>
using namespace std;
class MyClass{
    public:
    int age;
    string name;
    string study;
    MyClass(int age, string name, string study){
        (*this).age = age;
        (*this).name = name;
        (*this).study = study;
    }
};
MyClass* myfunc(){
    MyClass* obj = new MyClass(23,"Jagadishr","BBA");
    return obj;
}
int main(){
    MyClass* obj = myfunc();
    cout << (*obj).name << " " << (*obj).age << " " << (*obj).study << endl;
    return 0;
}