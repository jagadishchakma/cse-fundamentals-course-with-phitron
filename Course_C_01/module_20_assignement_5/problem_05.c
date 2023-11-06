/*
Author: Jagadish Chakma
Date: 5-11-2023
language: c
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int top_line = 6;
    for (int i = 2; i <= n; i++)
    {
        if (i%2 != 0)
        {
            top_line++;
        }
        
    }
    int s = top_line-1,k = 1;
    for (int i = 1; i <= top_line; i++)
    {
       for (int s1 = 1; s1 <= s; s1++)
       {
        printf(" ");
       }
       for (int k1 = 1; k1 <= k; k1++)
       {
        printf("*");
       }
       printf("\n");
       s--;
       k+=2;
    }
    int s2 = (k/2)-(n/2)-1;
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= s2; j++)
        {
            printf(" ");
        }
        
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
    
    return 0;
}