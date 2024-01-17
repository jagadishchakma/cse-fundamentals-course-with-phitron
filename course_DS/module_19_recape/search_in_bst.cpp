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
bool binarySearch(Node* root, int x){
    if(root ==  NULL) return false;
    if(root->val == x) return true;
    if(root->val < x){
       return binarySearch(root->right,x);
    }else{
        return binarySearch(root->left,x);
    }
};
int main(){
    Node* root = input_tree();
    bool check = binarySearch(root,60);
    if(check) cout << "Found" << endl;
    else cout << "Not Found" << endl;
    return 0;
}