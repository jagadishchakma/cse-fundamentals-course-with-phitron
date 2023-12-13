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
void insert(Node* &head, Node* &tail, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
};
void output_normal(Node* head){
    cout << "Noraml: ";
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
};
void output_inverse(Node* tail){
    cout << "Inverse: ";
    while(tail != NULL){
        cout << tail->val << " ";
        tail = tail->prev;
    }
    cout << endl;
};
int get_size(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count+1;
}

void insert_position(Node* &head, Node* &tail, int val, int pos){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    Node* tmp = head;
    for (int i = 1; i < pos; i++)
    {
        if(tmp->next == NULL) break;
        tmp = tmp->next;
    }

    if(pos > get_size(head)){
        cout << "Invalid Position" << endl;        

    }else if(pos == 1){
        newNode->next = tmp;
        tmp->prev = newNode;
        head = newNode;
        tail = newNode;
    }else if(pos == get_size(head)){
        tmp->next = newNode;
        newNode->prev = tmp;
        tail = newNode;
    }else{
        newNode->next = tmp;
        newNode->prev = tmp->prev;
        tmp->prev->next  = newNode;
        tmp->prev = newNode;
    }
   

    
};

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int n;
    cin >> n;
    for (int i = 1; i <=n ; i++)
    {
        int val;
        cin >> val;
        insert(head,tail, val);
    }
    int val,pos;
    cin >> val >> pos;
    insert_position(head,tail,val,pos);
    output_normal(head);
    output_inverse(tail);
    return 0;
}