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
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d  = new Node(50);
    
    // cycle connection
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;
    

    Node* slow = head;
    Node* fast = head;
    bool flg = false;
    while(slow != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
        if(slow == fast){
            flg = true;
            break;
        }
        
    }
    if(flg) cout << "cycle detected" << endl;
    else cout << "Not cycle" << endl;
    return 0;
}