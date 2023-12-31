#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val = val;
        next = NULL;
        prev = NULL;
    }
};
class myStack{
        Node* head = NULL;
        Node* tail = NULL;
        int siz = 0;
        public:
        void push(int v){
            siz++;
            Node* newNode = new Node(v);
            if(head == NULL){
                head = newNode;
                tail = newNode;
            }else{
                tail->next = newNode;
                newNode->prev = tail;
                tail =newNode;
            }
        }
        void pop(){
            siz--;
            Node* del = tail;
            tail = tail->prev;
            if(tail == NULL) head = NULL;
            else tail->next = NULL;
            delete del;
        }
        int top(){
            return tail->val;
        }
        int size(){
            return siz;
        }
        bool empty(){
            if(siz == 0) return true;
            else return false;
        }
};
int main(){
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (st.empty() == false)
    {
       cout << st.top() << endl;
       st.pop();
    }
    return 0;
}