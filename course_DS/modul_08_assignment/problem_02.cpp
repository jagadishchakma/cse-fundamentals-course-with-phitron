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
int get_index(Node* head, int x){
    Node* tmp = head;

    int index = 0;
    while(tmp != NULL){
        if(tmp->val == x){
            return index;
        }
        index++;
        tmp = tmp->next;
    }
    return -1;
};
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        Node* head = NULL;
        Node* tail = NULL;
        while(1){
            int val;
            cin >> val;
            if(val == -1) break;
            input_insert(head, tail, val);
        }
        int x;
        cin >> x;
        int index = get_index(head,x);
        cout << index << endl;

    }
    
    return 0;
}