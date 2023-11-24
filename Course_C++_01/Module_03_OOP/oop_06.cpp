#include <bits/stdc++.h>
using namespace std;
class MyClass1{
    public:
    string country_name = "Bangladesh";
};

class MyClass2: public MyClass1{
    public:
    string city = "rangamati";
};
int main(){
    MyClass2 country;
    cout << country.country_name << endl << country.city << endl;
    return 0;
}