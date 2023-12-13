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
void insert_head(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
    }else{
        newNode->next = head;
        head = newNode;
    }
};
void insert_tail(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
    }else{
        Node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
    }
};
int get_size(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
};

void delete_position(Node* &head, int pos, int size){
    if(head == NULL) return;
    if(pos > size){
        return;
    }else if(pos == 0){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
    }else{
        Node* tmp = head;
        for (int i = 1; i <= pos-1; i++)
        {
            if(tmp->next == NULL) return ;
            tmp = tmp->next;
        }
        if(tmp->next == NULL) return;
        Node* deleteNode  = tmp->next;
        tmp->next = tmp->next->next;
        delete deleteNode;
    }
};
void output_value(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
}
int main(){
    Node* head = NULL;
   
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int x, v;
        cin >> x >> v;
        if(x == 0){
            insert_head(head,v);
            output_value(head);
            cout << endl;
        }else if(x == 1){
            insert_tail(head,v);
            output_value(head);
            cout << endl;
        }else if(x == 2){
            int size = get_size(head);
            delete_position(head,v,size);
            output_value(head);
            cout << endl;
        }
    }
    
    return 0;
}