/*
Author: Jagadish Chakma
Date: 8-10-2023
language: c
*/
#include <stdio.h>
int main(){
    char c;
    scanf("%c", &c);
    if(c >= "a" && c <= "z"){
        int convert = c-32;
        printf("%c", convert);
    }else{
        int convert = c+32;
        printf("%c", convert);
    }
    return 0;
}