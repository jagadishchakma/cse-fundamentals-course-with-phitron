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
Node* convert(int arr[], int n, int l, int r){
    if(l > r){
        return NULL;
    }
    int mid = (l+r)/2;
    Node* root = new Node(arr[mid]);
    Node* root_left = convert(arr,n,l,mid-1);
    Node* root_right = convert(arr,n,mid+1,r);
    root->left = root_left;
    root->right = root_right;
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
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++) cin >> arr[i];
    Node* root = convert(arr,n,0,n-1);
    levelOrder(root);
    return 0;
}