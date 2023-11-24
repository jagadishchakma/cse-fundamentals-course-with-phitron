#include <bits/stdc++.h>
using namespace std;


class MyClass{
    public:
    char name[100];
    int age;
};

int main(){
    MyClass jagadish;
    cin.getline(jagadish.name, 100);
    cin >> jagadish.age;
    cout << jagadish.name << jagadish.age;
    return 0;
}