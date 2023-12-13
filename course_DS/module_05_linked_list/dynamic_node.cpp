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
    Node* head = new Node(20);
    Node* a = new Node(23);
    Node* b = new Node(345);
    Node* c = new Node(54);
    Node* d = new Node(78);
    head->next = a;
    a->next = b;
    b->next = c;
    c->next = d;

   Node* tmp = head;
   while (tmp != NULL)
   {
    cout << tmp->val << endl;
    tmp = tmp->next;
   }
   
    
    return 0;
}