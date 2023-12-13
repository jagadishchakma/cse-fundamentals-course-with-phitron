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
int main(){
    Node* head = NULL;
    while (1)
    {
        int val;
        cin >> val;
        if(val == -1){
            break;
        }
        Node* newNode = new Node(val);
        if(head == NULL){
            head = newNode;
        }else{
            Node* tmp = head;
            while (tmp->next != NULL)
            {
                tmp = tmp->next;
            }
            tmp->next = newNode;
            
        }

    }
    int a[100] = {0};
    Node* tmp = head;
    while(tmp != NULL){
        a[tmp->val]++;
        tmp = tmp->next;
    }
    bool check = false;
    for (int i = 0; i <= 100; i++)
    {
        if(a[i] > 1) check = true;
    }
    if(check){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
    
    
   
    return 0;
}