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
    int val;
    cin >> val;
    Node* root;
    if(val == -1){
        root = NULL;
    }else{
        root = new Node(val);
    }
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty()){
        Node* tmp = q.front();
        q.pop();
        int l,r;
        cin>> l>> r;
        Node* left;
        Node* right;
        if(l ==-1){
            left = NULL;
        }else{
            left = new Node(l);
        }
        if(r ==-1){
            right = NULL;
        }else{
            right = new Node(r);
        }
        tmp->left = left;
        tmp->right = right;
        if(tmp->left) q.push(tmp->left);
        if(tmp->right) q.push(tmp->right);
    }
    return root;
};
int count(Node* root){
    if(root == NULL) return 0;
    if(root->left == NULL && root->right == NULL) return 1;
    int l = count(root->left);
    int r = count(root->right);
    return l+r;
};
int main(){
    Node* root = input_tree();
    int cnt = count(root);
    cout << cnt;
    return 0;
}