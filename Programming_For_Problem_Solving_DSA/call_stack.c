#include<stdio.h>
void five(int n){
    printf("%d ",n);
}
void four(int n){
    printf("%d ",n);
    five(n+1);
}
void three(int n){
    printf("%d ", n);
    four(n+1);
}
void two(int n){
    printf("%d ",n);
    three(n+1);
}
int main(){
    int n = 0;
    printf("%d ",n);
    two(n+1);
    return 0;
}