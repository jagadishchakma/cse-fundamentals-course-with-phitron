/*
Author: Jagadish Chakma
Date: 4-11-2023
language: c
*/

#include <stdio.h>
int main(){
    int rate;
    int d_price;
    scanf("%d%d",&rate,&d_price);
    float d = 1-((1.0*rate)/100);
    float result = d_price/d;
    printf("%0.2f",result);
    return 0;
}