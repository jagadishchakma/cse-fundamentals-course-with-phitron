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
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    while(!q.empty()){
        Node* tmp = q.front();
        cout << tmp->val << " ";
        q.pop();
        if(tmp->left != NULL) q.push(tmp->left);
        if(tmp->right != NULL) q.push(tmp->right);
        
        
    }
};
bool bst_search(Node* root, int x){
    if(root == NULL) return false;
    else if(root->val == x) return true;
    else{
        if(x < root->val) return bst_search(root->left,x);
        else return bst_search(root->right,x);
    }
};
int main(){
    Node* root = input_tree();
    levelOrder(root);
    int x;
    cin >> x;
    bool result = bst_search(root,x);
    if(result) cout << "Found";
    else cout << "Not Found";
    return 0;
}