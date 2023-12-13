#include <bits/stdc++.h>
using namespace std;

// linked list data structure
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val = val;
        next = NULL;
    }
};

// add value function
void add_value(Node* &head){
    cout << "Input value: to add" << endl;
    int val;
    cin >> val;
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        return;
    }else{
        Node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
}

// print to value
void print_value(Node* head){
    cout << "Your linked list:" ;
    Node* tmp = head;
    while(tmp !=  NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}

// insert to positions
void insert_value(Node* &head){
    cout << "Input value and Position Followed" << endl;
    int v,p;
    cin >> v >> p;
    Node* tmp = head;
    Node* newNode = new Node(v);
    if(p == 0){
        newNode->next = head;
        head  = newNode;
        return;
    }
    for (int i = 1; i < p-1; i++)
    {
        tmp = tmp->next;
    }
  
    newNode->next = tmp->next;
    tmp->next = newNode;
}

void delete_node(Node* &head){
    cout <<"Enter Position to delete node:" << endl;
    int p;
    cin >> p;
    if(p == 0){
        Node* tmp2nd = head->next;
        delete head;
        head = tmp2nd;
        return;
    }
    Node* tmp = head;
    for (int i = 1; i <= p-1; i++)
    {
        tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    
}

int main(){
    Node* head = NULL;
    while(1){
        cout << "Input 1: to add value" << endl;
        cout << "Input 2: to print value" << endl;
        cout << "Input 3: to inset positions" << endl;
        cout << "Input 4: to delete node" << endl;
        int n;
        cin >> n;
        if(n == 1){ // add value
            add_value(head);
        }else if(n == 2){
            print_value(head);
        }else if(n==3){
            insert_value(head);
        }else if(n ==4){
            delete_node(head);
        }

    }
    return 0;
}