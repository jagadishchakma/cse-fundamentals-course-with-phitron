#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int roll;
    int marks;
};
bool cmp(Person a, Person b){
    if(a.marks < b.marks){
        return true;
    }else if(a.marks > b.marks){
        return false;
    }else {
        if(a.roll < b.roll) return true;
        else return false;
    }
}
int main(){
    int n;
    cin >> n;
    cin.ignore();
    Person* a = new Person[n];
    for (int i = 0; i < n; i++)
    {
        getline(cin,a[i].name);
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}