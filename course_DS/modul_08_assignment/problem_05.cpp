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

void search(Node* head, int val){
    Node* tmp = head;
    while(tmp->next != NULL){
        if(tmp->next->val == val){
            Node* del = tmp->next;
            tmp->next = del->next;
            delete del;
        }else{
            tmp = tmp->next;
        }
        
    }
}

void remove_duplicate(Node* head){
    Node* tmp = head;
    for (Node* i = tmp; i != NULL; i = i->next)
    {
         search(i, i->val);
    }
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    
}
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(head,tail,val);
    }

    remove_duplicate(head);
    
    
    return 0;
}