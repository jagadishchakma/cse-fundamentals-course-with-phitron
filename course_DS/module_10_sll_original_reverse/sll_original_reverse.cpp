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

void reverse_value(Node* &head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    };
    reverse_value(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);

    head->next = a;
    a->next  = b;
    b->next = c;

    reverse_value(head,head);
    return 0;
}