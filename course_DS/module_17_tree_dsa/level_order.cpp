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
int height_node(Node* root){
    if(root == NULL) return 0;
    int l = height_node(root->left);
    int r = height_node(root->right);
    return max(l,r)+1;
};
void levelOrder(Node* root){
    queue<Node*> q;
    q.push(root);
    int cnt = 0;
    while(!q.empty()){
        cnt++;
        Node* tmp = q.front();
        cout << tmp->val << " ";
        q.pop();
        //

        //
        if(cnt-1 == x) q.push(tmp->left);
        if(tmp->right != NULL) q.push(tmp->right);
        
        
    }
};
int main(){
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

    root->left = a;
    root->right = b;
    a->left = c;
    a->right = h;
    b->right = d;
    c->right = e;
    h->right = i;
    d->left = f;
    d->right = g;
    levelOrder(root);
    return 0;
}