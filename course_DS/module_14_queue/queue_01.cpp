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
class myQueu{
    public:
    Node* head = NULL;
    Node* tail = NULL;
    int siz = 0;
    void push(int val){
        siz++;
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        head->next = newNode;
        tail = newNode;
    }
    void pop(){
        siz--;
        Node* del = head;
        head = head->next;
        if(head == NULL) tail = NULL;
        delete del;
    }
    int front(){
        return head->val;
    }
    int size(){
        return siz;
    }
    bool empty(){
        if(siz == 0) return true;
        else return false;
    }
};
int main(){
    myQueu q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    cout << q.front();
    return 0;
}