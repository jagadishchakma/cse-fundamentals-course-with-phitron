#include <bits/stdc++.h>
using namespace std;
class Students{
    public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(Students a, Students b){
    int a_r = a.math_marks + a.eng_marks;
    int b_r = b.math_marks + b.eng_marks;
    if(a_r > b_r){
        return true;
    }else if(a_r < b_r){
        return false;
    }else{
        if(a.id < b.id) return true;
        else return false;
    }
};
int main(){
    int n;
    cin >> n;
    Students st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id >> st[i].math_marks >> st[i].eng_marks;
    }
    sort(st,st+n,cmp);
    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << " " << st[i].math_marks << " " << st[i].eng_marks << endl;
    }
    
    return 0;
}