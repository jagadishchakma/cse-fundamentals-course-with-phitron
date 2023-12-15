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
void print_reverse(Node* &head, Node* cur){
    if(cur->next == NULL){
        head = cur;
        return;
    }
    print_reverse(head,cur->next);
    cur->next->next = cur;
    cur->next = NULL;
};
void output(Node* head){
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
};
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;
    a->next  = b;
    b->next = c;
    c->next = d;
    print_reverse(head,head);
    cout << endl;
    output(head);
    return 0;
}