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

class Queue{
     public:
    Node* head = NULL;
    Node* tail = NULL;

    void push(int val){
        Node* newNode  = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    void dequeue(){
        Node* del = head;
        head = head->next;
        if(head == NULL){
            tail = NULL;
            return;
        }
        
        head->prev = NULL;
        delete del;
    }

    int enqueue(){
        return head->val;
    }
};

class Stack{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int sz = 0;
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            head->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop(){
        Node* del = tail;
        tail = del->prev;
    }
    int top(){
        return tail->val;
    }
    int size(){
        return sz;
    }
};
int main(){
    Queue qu;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    Stack st;
    for (int i = 1; i <= n; i++)
    {
        st.push(qu.enqueue());
        qu.dequeue();
    }

    for (int i = 1; i <= n; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
    
    
    
    return 0;
}