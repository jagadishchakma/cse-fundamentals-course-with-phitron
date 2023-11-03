/*
Author: Jagadish Chakma
Date: 2-11-2023
language: c
*/
#include <stdio.h>
void print_last_fast(int n){
    printf("%d",n);
    if (n > 1) printf(" ");
    
    if (n == 1) return;
    print_last_fast(n-1);
}
int main(){
    int n;
    scanf("%d",&n);
    print_last_fast(n);
    return 0;
}