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
class Stack{
    public:
    Node* head  = NULL;
    Node* tail = NULL;

    void push(int val){
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
    void pop(){
        Node* del = tail;
        tail = del->prev;
        delete del;
    }
    int top(){
        return tail->val;
    }
};
int main(){
    Stack st1;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st1.push(x);
    }

    Stack st2;
    for (int i = 1; i <= n; i++)
    {
        st2.push(st1.top());
        st1.pop();
    }
    
    for (int i = 1; i <= n; i++)
    {
        cout << st2.top() << " ";
        st2.pop();
    }
    
    
    return 0;
}