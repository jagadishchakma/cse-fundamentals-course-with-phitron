#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int age;
   
};
int main(){
    int n;
    cin >> n;
    Student arr[n];
    for (int i = 0; i < n; i++)
    {
        string name;
        int age;
        cin >> name >> age;
        Student newSt;
        newSt.name = name;
        newSt.age = age;
        arr[i] = newSt;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i].name << " " << arr[i].age << endl;
    }
    
    
    return 0;
}