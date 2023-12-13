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

void input_insert(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
};

void output_value(Node* head){
    if(head == NULL) return;
    output_value(head->next);
    cout << head->val << " ";
}
int main(){
    Node* head = NULL;

    Node* tail = NULL;
    while (true)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(head,tail,val);
    }
    output_value(head);
    
    return 0;
}