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
    int m;
    cin >> m;
    for (int i = 1; i <= m; i++)
    {
        int x;
        cin >> x;
        st2.push(x);
    }
    if(st1.size() != st2.size()){
        cout << "NO";
    }else{
        int flag = 1;
        for (int i = 1; i <= n; i++)
        {
            if(st1.top() != st2.top()){
                flag = 0;
                break;
            }
            st1.pop();
            st2.pop();
        }
        if(flag) cout << "YES";
        else cout << "NO";
    }
    return 0;
}