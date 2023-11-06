/*
Author: Jagadish Chakma
Date: 9-10-2023
language: c
*/
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int x;
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x);
        if(max < x){
            max = x;
        }

    }
    printf("%d", max);
    
    return 0;
}