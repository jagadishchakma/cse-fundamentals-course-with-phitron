#include <iostream>
using namespace std;
int main(){
    // using + operator
    string first_name = "Jagadish";
    string last_name = "Chakma";
    string full_name = first_name + last_name;
    cout << full_name << endl;
    string full_name2  = first_name.append(last_name);
    cout << full_name2 << endl;
    return 0;
}