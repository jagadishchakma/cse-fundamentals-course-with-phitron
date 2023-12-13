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

int get_sll_size(Node* head){
    int count = 0;
    while(head != NULL){
        count++;
        head = head->next;
    }
    return count;
}
int main(){
    Node* sll_head_one = NULL;
    Node* sll_head_two = NULL;

    Node* tail = NULL;
    while(true){
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(sll_head_one, tail, val);

    }
     while(true){
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(sll_head_two, tail, val);

    }
    int one = get_sll_size(sll_head_one);
    int two = get_sll_size(sll_head_two);
    if(one == two){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    return 0;
}