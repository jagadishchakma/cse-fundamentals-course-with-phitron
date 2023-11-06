/*
Author: Jagadish Chakma
Date: 2-11-2023
language: c
*/
#include <stdio.h>
void recursive(int n, int i){

    printf("I love Recursion\n");
    if (i == n) return;
    recursive(n, i+1);
}
int main(){
    int n;
    int i = 1;
    scanf("%d",&n);
    recursive(n,i);
    return 0;
}