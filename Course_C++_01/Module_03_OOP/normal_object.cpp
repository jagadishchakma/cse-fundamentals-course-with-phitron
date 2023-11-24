#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    Person(string name, int age){
        this->name = name;
        this->age = age;
    }
};

Person* myfun(){
    Person* jaga = new Person("Jagadish Chakma", 25);
    return jaga;
}

int main(){
    Person* jaga = myfun();
    cout << (*jaga).name << endl << (*jaga).age;
    return 0;
}