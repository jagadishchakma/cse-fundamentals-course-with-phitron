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
void input_insert(Node* &head, int val){
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
void output_linked_list(Node* head){
    cout << "linked list: ";
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};
void insert_position(Node* head, int pos, int val){
    Node* newNode = new Node(val);
    Node* tmp = head;
    for (int i = 1; i < pos-1; i++)
    {
        if(tmp == NULL){
            cout << "Invalid position" << endl;
            return;
        }
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next = newNode;
    
};
void insert_head(Node* &head, int val){
    Node* newNode = new Node(val);
    newNode->next = head->next;
    head = newNode;
    cout << "Inserted Successfull" << endl;
};
void delete_value(Node* &head, int pos){
    Node* tmp = head;
    if(pos == 1){
        Node* deleteNode = head;
        head = head->next;
        delete deleteNode;
        cout << "delete Successfull" << endl;
        return;
    }
    for (int i = 1; i < pos-1; i++)
    {
       if(tmp == NULL){
        cout << "Invalid Index" << endl;
        return;
       }
       tmp = tmp->next;
    }
    Node* deleteNode = tmp->next;
    tmp->next = tmp->next->next;
    delete deleteNode;
    cout << "Delete Successfully" << endl;
    
}
int main(){
    Node* head = NULL;
    while(true){
        cout << "Option-1 : to insert at tail:" << endl;
        cout << "Option-2: to print linked list: " << endl;
        cout << "Option-3: to insert any position: "<< endl;
        cout << "Option-4: to insert at head: " << endl;
        cout << "Option-5: to delete: " << endl;
        cout << "Option-6: to terminate: " << endl;
        int op;
        cin >> op;
        if(op == 1){
            int val;
            cin >> val;
            input_insert(head, val);
        }else if(op == 2){
            output_linked_list(head);
        }else if(op == 3){
            int pos;
            int val;
            cin >> pos >> val;
            insert_position(head,pos,val);
        }else if(op == 4){
            int val;
            cin >> val;
            insert_head(head,val);
        }else if(op == 5){
            int pos;
            cin >> pos;
            delete_value(head, pos);
        }else if(op == 6){
            break;
        }
    }
    return 0;
}