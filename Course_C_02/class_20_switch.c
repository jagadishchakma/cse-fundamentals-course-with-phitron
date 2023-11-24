/*
Author: Jagadish Chakma
Date: 8-11-2023
language: c
*/
#include <stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    switch (num)
    {
    case 0:
        printf("Zero");
       break;
    case 1:
        printf("one");
       break;
    case 2:
        printf("two");
       break;
    case 3:
        printf("three");
       break;
    default:
        printf("None of the number");
       break;
    }
    return 0;
}