#include <bits/stdc++.h>
using namespace std;
class Node{
    public: 
    int val;
    Node* next;
};
int main(){
    Node a,b;
    a.val = 23;
    b.val = 53;
    a.next = &b;
    b.next = NULL;

    cout << a.val << " " << (*a.next).val << endl;
    cout << a.val << " " << a.next->val << endl;
    return 0;
}