#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};
    
// print preorder
void preorder(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
};
int main(){

    // create 10 node following the diagram
    Node* root = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* c = new Node(40);
    Node* d = new Node(50);
    Node* e = new Node(60);
    Node* f = new Node(70);
    Node* g = new Node(80);
    Node* h = new Node(90);
    Node* i = new Node(100);

    // now connection node following the binary tree architecture diagram:
    root->left = a;
    root->right = b;
    a->left = c;
    c->left = f;
    c->right = g;
    b->left = d;
    d->right = e;
    e->left = h;
    e->right = i;
    preorder(root);
    return 0;
}