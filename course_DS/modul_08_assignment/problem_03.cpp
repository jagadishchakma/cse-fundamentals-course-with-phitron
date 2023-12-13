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
void input_insert(Node* &head, Node* &tail,int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
        tail = newNode;
    }else{
        tail->next = newNode;
        tail = newNode;
    }
};
int get_size(Node* head){
    Node* tmp = head;
    int count = 0;
    while(tmp != NULL){
        count++;
        tmp = tmp->next;
    }
    return count;
}
int check_compare(Node* head_one, Node* head_two){
    int one = get_size(head_one);
    int two = get_size(head_two);
    if(one != two){
        return 0;
    }else{
        Node* tmp_one = head_one;
        Node* tmp_two = head_two;
        int check = 1;
        for (int i = 1; i <= one; i++)
        {
            if(tmp_one->val != tmp_two->val) check = 0;
            tmp_one = tmp_one->next;
            tmp_two = tmp_two->next;
        }
        return check;
        
    }
}
int main(){
    Node* one_head = NULL;
    Node* two_head = NULL;
    Node* tail = NULL;
    while(1){
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(one_head,tail,val);
    }
    while(1){
        int val;
        cin >> val;
        if(val == -1) break;
        input_insert(two_head,tail,val);
    }
    int result = check_compare(one_head, two_head);

    if(result) cout << "YES";
    else cout << "NO";
    return 0;
}