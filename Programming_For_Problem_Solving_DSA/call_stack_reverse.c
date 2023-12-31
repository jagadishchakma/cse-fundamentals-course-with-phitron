#include<stdio.h>
void five(int n){
    printf("%d ", n);
}
void four(int n){
    five(n+1);
    printf("%d ", n);
}
void three(int n){
    four(n+1);
    printf("%d ", n);
}
void two(int n){
    three(n+1);
    printf("%d ", n);
}
void one(int n){
    two(n+1);
    printf("%d ", n);
}
int main(){
    int n = 0;
    one(n+1);
    printf("%d ",n);
    return 0;
}