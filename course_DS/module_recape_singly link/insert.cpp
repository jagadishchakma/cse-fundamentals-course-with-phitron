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
int main(){
    Node* head  = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

    // insert
    int pos;
    cin >> pos;
    Node* tmp = head;
    for (int i = 1; i < pos-1; i++)
    {
         if(tmp->next == NULL){
            cout << "Invalid Positions";
            break;
        }
        tmp = tmp->next;
       
    }
    Node* newNode = new Node(100);
    newNode->next = tmp->next;
    tmp->next  = newNode;
    

    // print 
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}