#include<stdio.h>
struct Node{
    int val;
    struct Node next;
}
int main(){
    struct Node head  = {10,NULL};
    struct Node a = {20,NULL};
    struct Node b = {30,NULL};
    head.next = a;
    a.next = b;

    struct Node tmp = head;
    while(tmp != NULL){
        cout << tmp.val;
        tmp = tmp.next;
    }
    return 0;
}