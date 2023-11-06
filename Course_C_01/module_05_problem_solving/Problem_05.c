/*
Author: Jagadish Chakma
Date: 9-10-2020
language: c
*/
#include <stdio.h>
int main(){
    char n;
    scanf("%c", &n);
    if(n >= 0 && n<= 57){
        printf("Is DIGITS");
    }else{
        printf("ALPHA");
        if(n >= 97 && n<= 122){
            printf("IS SMALL");
        }else{
            printf("IS CAPITAL");
        }
    }
    return 0;
}