/*
Author: Jagadish Chakma
Date: 10-10-2023
language: c
*/

#include <stdio.h>
int main(){
    char a;
    scanf("%c", &a);
    if(a==122){
        printf("%c",'a');
    }else{
        printf("%c",a+1);
    }
    return 0;
}