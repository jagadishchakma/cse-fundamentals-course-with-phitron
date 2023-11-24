/*
Author: Jagadish Chakma
Date: 9-11-2023
language: c
*/
#include <stdio.h>
int main(){
    int a = 34;
    int *b = &a;
    int *c = b;
    int *d = c;
    int *e = d;
    printf("%d",*e);
}