#include <bits/stdc++.h>
using namespace std;
// custom namepsace
namespace jagadish{
    int age = 26;
    string name = "Jagadish Chakma";
    void full_name(){
        cout << "Dr. Jagadish Chakma";
    }
}

int main(){
    jagadish::full_name();
    cout << jagadish::age;
    return 0;
}