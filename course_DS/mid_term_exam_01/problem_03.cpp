#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    string addr;
    Node* next;
    Node* prev;
    Node(string addr){
        this->addr = addr;
        next = NULL;
        prev = NULL;
    }
};
void insert(Node* &head, Node* &tail, string addr){
    Node* newNode = new Node(addr);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }
};
void output(Node* head){
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->addr << " ";
        tmp = tmp->next;
    }
};
void visit_address(Node* &head, Node* &cur, string addr){
    Node* tmp = head;
    string get_addr = "Not Available";
    while(tmp != NULL){
        if(tmp->addr == addr){
            get_addr = tmp->addr;
            break;
        }
        tmp = tmp->next;
    }
    cout << get_addr << endl;
    if(get_addr != "Not Available"){
        cur = tmp;
    }
};
void visit_prev(Node* &cur){
    if(cur->prev != NULL){
        cout << cur->prev->addr << endl;
        cur = cur->prev;
    }else{
        cout << "Not Available" << endl;
    }
};
void visit_next(Node* &cur){
    if(cur->next != NULL){
        cout << cur->next->addr << endl;
        cur = cur->next;
    }else{
        cout << "Not Available" << endl;
    }
}

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    while (1)
    {
        string addr;
        cin >> addr;
        if(addr == "end") break;
        insert(head,tail,addr);

    }
    Node* cur = head;
    int q;
    cin >> q;
    getchar();
    for (int i = 1; i <= q; i++)
    {
       string comm;
       getline(cin,comm);

       if(comm == "prev"){
        visit_prev(cur);
       }else if(comm == "next"){
        visit_next(cur);
       }else{
        comm.erase(0,6);
        visit_address(head,cur,comm);
       }
    }
    
    return 0;
}