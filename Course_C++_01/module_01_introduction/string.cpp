#include <iostream>
using namespace std;
int main(){
    char str[100];
    cin.getline(str,100);
    cout << str << endl;
    string result = (10>5)?"grether than 5": "less than 5";
    cout << result << endl;
    cout << sizeof(string) << endl;
    return 0;
}