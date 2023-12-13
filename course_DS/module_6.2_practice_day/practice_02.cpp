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
    }
    Node* tmp = head;
    while(tmp->next != NULL){
        tmp = tmp->next;
    }
    tmp->next = newNode;
};
void print_reverse(Node* head){
    if(head == NULL) return;
    print_reverse(head->next);
    cout << head->val << " ";
}
int main(){
    Node* head = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(head, val);
    }
    // print_reverse(head);
    cout << endl;
    return 0;
}