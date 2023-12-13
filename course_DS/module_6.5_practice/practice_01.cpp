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
        if(val == -1) break;
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
    Node* tmp = head;
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    cout << count << endl;
    
    return 0;
}