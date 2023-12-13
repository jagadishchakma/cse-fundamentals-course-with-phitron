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
void insert_one(Node* &one, int val){
    Node* newNode = new Node(val);
    if(one == NULL){
        one = newNode;
        return;
    }
    Node* tmp = one;
    while (tmp->next != NULL)
    {
       tmp = tmp->next;
    }
    tmp->next = newNode;
    
    
};
void insert_two(Node* &two, int val){
    Node* newNode = new Node(val);
    if(two == NULL){
        two = newNode;
        return;
    }
    Node* tmp = two;
    while (tmp->next != NULL)
    {
       tmp = tmp->next;
    }
    tmp->next = newNode;
    
};
int get_size(Node* node, int size){
    if(node == NULL){
        return size;
    }
    int count = size+1;
    get_size(node->next,count);
};
int main(){
    Node* one = NULL;
    Node* two = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_one(one, val);
    }
    while (1)
    {
        int val;
        cin >> val;
        if(val == -1) break;
        insert_two(two, val);
    }
    int size_one = get_size(one,0);
    int size_two = get_size(two,0);
    if(size_two == size_one) cout  << "YES" << endl;
    else cout <<  "NO" << endl;
    return 0;
}