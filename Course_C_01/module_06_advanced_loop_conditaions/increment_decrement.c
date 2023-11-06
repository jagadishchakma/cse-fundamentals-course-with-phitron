/*
Author: Jagadish Chakma
Date: 9-10-2023
language: c
*/

#include <stdio.h>
int main(){
    int a = 4;
    // post increment

    // post decrement
    int d = --a;
    printf("%d",d);
    // pre increment
    int e = a--;
    printf("%d",e);
    return 0;
}