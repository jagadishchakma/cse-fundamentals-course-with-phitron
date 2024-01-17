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
int height_node(Node* root){
    if(root == NULL) return 0;
    int l = height_node(root->left);
    int r = height_node(root->right);
    return max(l,r)+1;
};
int cnt = 0;
int postorder(Node* root){
    if(root == NULL){
        return cnt;
    };
    postorder(root->left);
    postorder(root->right);
    cnt++;
    return cnt;
};

int main(){
    Node* root = input_tree();
    int height = height_node(root);
    int cnt = postorder(root);
    if(cnt == pow(2,height)-1){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}