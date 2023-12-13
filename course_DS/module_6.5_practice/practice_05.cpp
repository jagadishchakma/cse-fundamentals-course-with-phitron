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
void input_value(Node* &head, int value){
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
void check_order(Node* head){
    Node* tmp = head;
    bool check = true;
    while (tmp->next != NULL)
    {
        if(tmp->val > tmp->next->val) {
            check = false;
            break;
        }
        tmp = tmp->next;
    }
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
}
int main(){
    Node* head  = NULL;
    while(true){
        int value;
        cin >> value;
        if(value == -1) break;
        input_value(head,value);
    }
    // check ascending order or not
    check_order(head);
    return 0;
}