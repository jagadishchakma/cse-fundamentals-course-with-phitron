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

int get_size(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp= tmp->next;
    }
    return count;
};

void output_middle(Node* head, int size){
    Node* tmp = head;
    int l = size/2;
    for (int i = 1; i < l; i++)
    {
        tmp = tmp->next;
    }
    if(size%2 == 0){
        cout << tmp->val << " " << tmp->next->val;
    }else{
        cout << tmp->next->val;
    }
    
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
    int size = get_size(head);
    output_middle(head,size);
    return 0;
}