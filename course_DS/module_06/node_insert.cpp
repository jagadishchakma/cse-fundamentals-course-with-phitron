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
void insert_at_tail(Node* &head, int v){
    Node* newNode = new Node(v);
   
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
};
void print_linked_list(Node* head){
    cout << "Your linked list:  " ;
    Node* tmp = head;
    while(tmp !=  NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
int main(){
    Node* head = NULL;
    cout << "Option 1: Insert at Tail" << endl;
    int op;
    cin >> op;
    while(1){
         if(op == 1){
            cout << "Enter your value: " << endl;
            int v;
            cin >> v;
            insert_at_tail(head,v);
        }
          print_linked_list(head);
    }
    return 0;
}