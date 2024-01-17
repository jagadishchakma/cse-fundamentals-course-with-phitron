#include <bits/stdc++.h>
using namespace std;
class Student{
    public:
    string name;
    int roll;
    int marks;
    Student(string name, int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }
};
class CMP{
    public:
    bool operator()(Student a, Student b){
        if(a.marks > b.marks) return true;
        else if(a.marks < b.marks) return false;
        else{
            if(a.roll > b.roll) return true;
            else return false;
        }
    };
};
int main(){
    priority_queue<Student, vector<Student>, CMP> pq;
    int n;
    cin >> n;
    for(int i = 1; i <= n; i++){
        string name;
        int roll,marks;
        cin >> name >> roll >> marks;
        Student obj(name,roll,marks);
        pq.push(obj);
    }
    while(!pq.empty())
    {
        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().marks << endl;
        pq.pop();
    }
    
    return 0;
}