#include <bits/stdc++.h>
using namespace std;

class Person{
    public:
    string name;
    int roll;
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
        cin >> a[i].roll >> a[i].marks;
        cin.ignore();
    }
    for(int i = 0; i < n; i++){
        for (int j = i+1; j < n; j++)
        {
            if(a[i].marks  > a[j].marks){
                swap(a[i], a[j]);
            }else if(a[i].marks == a[j].marks){
                if(a[i].roll > a[j].roll){
                    swap(a[i],a[j]);
                }
            }
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i].name << " " << a[i].roll << " " << a[i].marks << endl;
    }
    
    return 0;
}