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
bool output(Node* head, Node* tail){
    Node* front = head;
    Node* back = tail;
    while(front != NULL){
        if(front->val != back->val) return false;
        front = front->next;
        back = back->prev;
    }
    return true;
};
int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert(head,tail,val);
    }
    bool check = output(head,tail);
    if(check) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}