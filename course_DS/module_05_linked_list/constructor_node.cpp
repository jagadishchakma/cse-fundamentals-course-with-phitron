#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};
int main(){
    Node a(120);
    Node b(34);
    a.next = &b;
    
    // access
    cout << a.next->val;
    return 0;
}