#include <bits/stdc++.h>
using namespace std;
class MyClass{
        public:
        string name;
        int roll;
        int marks;
};
int main(){
    int n;
    cin >> n;
    MyClass jagadish[n];
    for (int i = 0; i < n; i++)
    {
        getchar();
        getline(cin,jagadish[i].name);
        cin >> jagadish[i].roll >> jagadish[i].marks;
    }
    for (int i = 0; i < n; i++)
    {
        cout << jagadish[i].name << " " << jagadish[i].roll << " " << jagadish[i].marks << endl;
    }
    
    
    return 0;
}