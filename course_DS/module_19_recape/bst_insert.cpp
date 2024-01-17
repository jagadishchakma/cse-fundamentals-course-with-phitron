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
Node* input_tree(){
    int x;
    cin >> x;
    Node* root;
    if(x == -1) root = NULL;
    else root = new Node(x);
    queue<Node*> q;
    if(root) q.push(root);
    while (!q.empty())
    {
       Node* tmp = q.front();
       q.pop();
       int l,r;
       cin >> l >> r;
       Node* left;
       Node* right;
       if(l == -1) left = NULL;
       else left = new Node(l);
       if(r == -1) right = NULL;
       else right = new Node(r);

       tmp->left = left;
       tmp->right = right;
       if(left) q.push(left);
       if(right) q.push(right);
    }
    
    return root;
}
void bst_insert(Node* &root, int x){
    if(root == NULL){
        Node* insert = new Node(x);
        root = insert;
        return;
    }
    if(x < root->val){
        if(root->left == NULL){
            Node* insert = new Node(x);
            root->left = insert;
        }else{
            bst_insert(root->left,x);
        }
    }else{
        if(root->right == NULL){
            Node* insert = new Node(x);
            root->right = insert;
        }else{
            bst_insert(root->right,x);
        }
    }
};
void postOrder(Node* root){
    if(root == NULL) return;
    cout << root->val << " ";
    postOrder(root->left);
    postOrder(root->right);
}
int main(){
    Node* root = input_tree();
    int x;
    cin >> x;
    bst_insert(root,x);
    postOrder(root);
    return 0;
}