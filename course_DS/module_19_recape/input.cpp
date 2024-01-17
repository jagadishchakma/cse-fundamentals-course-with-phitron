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
    while(!q.empty()){
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

void level_order(Node* root){
    if(root == NULL) return;
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* tmp = q.front();
        q.pop();
        cout << tmp->val << " ";
        if(tmp->left != NULL) q.push(tmp->left);
        if(tmp->right != NULL) q.push(tmp->right);
    }
}
int main(){
    Node* root = input_tree();
    level_order(root);
    return 0;
}