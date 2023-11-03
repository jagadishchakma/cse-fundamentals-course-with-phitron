/*
Author: Jagadish Chakma
Date: 2-11-2023
language: c
*/
#include <stdio.h>
void print_numbers(int n, int i){
    printf("%d\n",i);
    if (i == n) return;
    print_numbers(n,i+1);
}
int main(){
    int n;
    int i = 1;
    scanf("%d",&n);
    print_numbers(n,i);
    return 0;
}