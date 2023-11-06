/*
Author: Jagadish Chakma
Date: 9-10-2023
language: c
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int digit = n/1000;
    int check = digit%2;
    if(check == 0){
        printf("EVEN");
    }else{
        printf("ODD");
    }
    return 0;
}