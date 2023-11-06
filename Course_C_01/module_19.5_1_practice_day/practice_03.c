/*
Author: Jagadish Chakma
Date: 5-11-2023
language: c
*/

#include <stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    int w,h;
    for (int i = 0; i < t; i++)
    {
        scanf("%d%d",&w,&h);
        if (w == h)
        {
            printf("Square\n");
        }else{
            printf("Rectangle\n");
        }
        
    }
    
    return 0;
}