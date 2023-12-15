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
int get_size(Node* head){
    if(head == NULL){
        return 0;
    }else{
        int cnt = 0;
        while(head != NULL){
            cnt++;
            head = head->next;
        }
        return cnt;
    }
};
void output_normal(Node* head){
    cout << "L -> ";
    while(head != NULL){
        cout << head->val << " ";
        head = head->next;
    }
    cout << endl;
}
void output_inverse(Node* head){
    if(head == NULL) return;
    output_inverse(head->next);
    cout << head->val << " ";
}
void insert_output(Node* &head, Node* &tail, int pos, int val, int size){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else if(pos == 0){
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }else if(pos == size){
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }else{
        Node* tmp = head;
        for (int i = 1; i <= pos-1; i++)
        {
            tmp = tmp->next;
        }
        newNode->next = tmp->next;
        newNode->prev = tmp;
        tmp->next->prev = newNode;
        tmp->next = newNode;
        
    }
};

int main(){
    Node* head = NULL;
    Node* tail = NULL;
    int q;
    cin >> q;
    for (int i = 1; i <= q; i++)
    {
        int x,v;
        cin >> x >> v;
        int size = get_size(head);
        if(x > size || x < 0){
            cout << "Invalid" << endl;
        }else{
            insert_output(head,tail,x,v,size);
            output_normal(head);
            cout << "R -> ";
            output_inverse(head);
            cout << endl;
        }
    }
    return 0;
}