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

void input_value(Node* &head, int val){
    Node* newNode = new Node(val);
    if(head == NULL){
        head = newNode;
         cout << "Add value successfull" << endl << endl;
    }else{
        Node* tmp = head;
        while(tmp->next != NULL){
            tmp = tmp->next;
        }
        tmp->next = newNode;
        cout << "Add value successfull" << endl << endl;
    }
};
void print_value(Node* head){
    cout << "See linked list:";
    Node* tmp = head;
    while(tmp != NULL){
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
};
void print_middle_values(Node* head){
    Node* tmp = head;
    int size = 0;
    while(tmp != NULL){
        size++;
        tmp = tmp->next;
    }
    if(size%2 == 0){
        Node* tmp = head;
        int s2 = 0;
        int in = size/2;
        while(tmp != NULL){
            if(s2 == in || s2 == in-1){
                cout << tmp->val << " ";
            }
            s2++;
            tmp = tmp->next;
        }
        cout << endl;
    }else{
        Node* tmp = head;
        int s3 = 0;
        int in = size/2;
        while(tmp != NULL){
            if(s3 == in){
                cout << tmp->val << endl;
            }
            s3++;
            tmp = tmp->next;
        }
    }
}
int main(){
    Node* head = NULL;
    while(1){
        
        cout << "Input 1: to add value" << endl;
        cout << "Input 2: to print value" << endl;
        cout << "Input 3: to print middle values" << endl;
        int n;
        cin >> n;
        if(n == 1){
            cout << "Input value: to add: ";
            int val;
            cin >> val;
            input_value(head, val);
        }else if(n==2){
            print_value(head);
        }else if(n==3){
            print_middle_values(head);
        }
    }
    return 0;
}