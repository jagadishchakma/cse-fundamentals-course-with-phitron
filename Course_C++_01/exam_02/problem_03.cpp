#include <bits/stdc++.h>
using namespace std;
class Students{
    public:
    string nm;
    int cls;
    char s;
    int id;
};

int main(){
    int n;
    cin >> n;
    Students st[n];
    for (int i = 0; i < n; i++)
    {
        cin >> st[i].nm >> st[i].cls >> st[i].s >> st[i].id;
    }
    int j = n-1;
    for (int i = 0; i < j; i++)
    {
        char tmp = st[i].s;
        st[i].s = st[j].s;
        st[j].s = tmp;
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << st[i].nm << " " << st[i].cls << " " << st[i].s << " " << st[i].id << endl;
    }
    
    
    
    return 0;
}