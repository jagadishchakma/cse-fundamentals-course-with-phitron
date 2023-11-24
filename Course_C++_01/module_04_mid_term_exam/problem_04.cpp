#include <bits/stdc++.h>
using namespace std;
class Students{
    public:
    int ID;
    string name;
    char section;
    int total_marks;
    Students(int i, string n, char s, int t){
        ID = i;
        name = n;
        section = s;
        total_marks = t;
    }
};
int main(){
    int t;
    cin >> t;

    for (int i = 1; i <= t; i++)
    {
       int id; string name; char section; int total_marks;
       cin >> id >> name >> section >> total_marks;
       Students s1(id,name,section,total_marks);
       cin >> id >> name >> section >> total_marks;
       Students s2(id,name,section,total_marks);
       cin >> id >> name >> section >> total_marks;
       Students s3(id,name,section,total_marks);

       if(s1.total_marks >= s2.total_marks && s1.total_marks >= s3.total_marks){
        cout << s1.ID << " " << s1.name << " " << s1.section << " " << s1.total_marks << endl;
       }else if(s2.total_marks >= s1.total_marks && s2.total_marks >= s3.total_marks){
        cout << s2.ID << " " << s2.name << " " << s2.section << " " << s2.total_marks << endl;
       }else{
        cout << s3.ID << " " << s3.name << " " << s3.section << " " << s3.total_marks << endl;
       }
    }
    
    return 0;
}