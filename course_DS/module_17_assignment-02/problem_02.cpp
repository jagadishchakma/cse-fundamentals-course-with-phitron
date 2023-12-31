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
    Node* tail;
    int sz = 0;
    public:
    Stack(){
        tail = NULL;
    }
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(tail == NULL){
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop(){
        sz--;
        Node* del = tail;
        tail = del->prev;
        if(tail == NULL){
            delete del;
            return;
        }
        tail->next = NULL;
        delete del;
    }
    int top(){
        return tail->val;
    }

    int size(){
        return sz;
    }
};
class Queue{
    Node* tail;
    Node* head;
    int sz = 0;
    public:
    Queue(){
        tail = NULL;
        head = NULL;
    }
    void push(int val){
        sz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
        }else{
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }
    void pop(){
        sz--;
        Node* del = head;
        head = del->next;
        if(head == NULL){
            tail = NULL;
            delete del;
            return;
        }
        head->prev = NULL;
        delete del;
    }
    int front(){
        return head->val;
    }

    int size(){
        return sz;
    }
};
int main(){
    int n, m;
    cin >> n >> m;
    Stack st;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }
    Queue qu;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        qu.push(x);
    }
    
    if(n != m){
        cout << "NO";
    }else{
        int flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if(st.top() != qu.front()){
                flag = 0;
                break;
            }
            st.pop();
            qu.pop();
        }
        if(flag) cout << "YES";
        else cout << "NO";
        
    }
    return 0;
}