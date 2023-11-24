#include <bits/stdc++.h>
using namespace std;

class MyClass1{ // base class
	public:
	string country_name = "Bangladesh";
};

class MyClass2: public MyClass1{ // child class
	public:
	string city = "Rangamati";
};
class MyClass3: public MyClass2{
	public:
	int zip_code = 4500;
};

int main(){
	MyClass3 country;
	cout << country.country_name << endl << country.city << endl << country.zip_code;
	return 0;
}