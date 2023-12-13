#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
void output_next(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
};
void output_prev(Node* tail){
    Node* prev = tail;
    while(prev != NULL){
        cout << prev->val << " ";
        prev = prev->prev;
    }
};

void insert_position(Node* head, int ind){
    Node* newNode = new Node(50);
    Node* tmp = head;
    for (int i = 1; i < ind; i++)
    {
       if(tmp == NULL) return;
       tmp = tmp->next;
    }
    newNode->next = tmp;
    newNode->prev = tmp->prev;
    tmp->prev = newNode;
}
int main(){
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c  = new Node(40);

    Node* tail = c;
    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = c;
    c->prev = b;


    output_next(head);
    cout << endl;
    insert_position(head,5);
    output_prev(tail);
    return 0;
}