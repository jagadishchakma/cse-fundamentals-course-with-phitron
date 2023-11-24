#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int age;
    int marks;
};
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Person* a = new Person[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,a[i].name);
        cin >> a[i].age >> a[i].marks;
        cin.ignore();
    }
    Person mn;
    mn = a[0];
    for (int i = 0; i < n; i++)
    {
        if(a[i].marks < mn.marks){
            mn = a[i];
        }
    }
    cout << mn.name << " " << mn.age << " " << mn.marks;
    
    return 0;
}