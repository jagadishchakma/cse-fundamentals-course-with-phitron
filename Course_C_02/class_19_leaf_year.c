/*
Author: Jagadish Chakma
Date: 8-11-2023
language: c
*/
#include <stdio.h>
int main(){
    int year;
    scanf("%d",&year);
    if (year%400 == 0)
    {
        printf("leaf year");
    }else if(year%4 == 0 && year%100 != 0){
        printf("leaf year");
    }else{
        printf("Not leaf year");
    }
    
    return 0;
}