#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int value;
    Node* next;
};

int main(){
    Node a,b;
    a.value = 23;
    b.value = 45;
    a.next = &b;
    b.next = NULL;
    cout << a.next->value;
    return 0;
}