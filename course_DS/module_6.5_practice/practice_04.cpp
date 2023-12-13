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
void insert_input(Node* &head, int value){
    Node* newNode = new Node(value);
    if(head == NULL){
        head = newNode;
        return;
    }
    Node* tmp = head;
    while (tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newNode;
    
};
void output_value(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
void insert_position(Node* &head, int index, int value){
    Node* newNode = new Node(value);
    if(index == 0){
        newNode->next = head;
        head = newNode;
    }else{
        Node* tmp = head;
        for (int i = 1; i <= index-1; i++)
        {
            tmp = tmp->next;
            if(tmp == NULL){
                cout << "Invalid" << endl;
                return;
            }
            
        }
        newNode->next = tmp->next;
        tmp->next = newNode;
    }
    output_value(head);
};
int main(){
    Node* head = NULL;
     while(true){
        int value;
        cin >> value;
        if(value == -1) break;
        insert_input(head,value);
    }
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int index,value;
        cin >> index >> value;
        insert_position(head,index,value);
    }
    
    return 0;
}