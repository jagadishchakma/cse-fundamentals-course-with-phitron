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
void get_output(Node* head){
    Node* tmp = head;
    int max = head->val;
    int min = head->val;
    while(tmp != NULL){
        if(max < tmp->val) max = tmp->val;
        if(min > tmp->val) min = tmp->val;
        tmp = tmp->next;
    }
    cout << abs(max-min);
    return;
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while(1){
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(head,tail,val);
    }
    get_output(head);
    return 0;
}