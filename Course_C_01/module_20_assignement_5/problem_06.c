/*
Author: Jagadish Chakma
Date: 3-11-2023
language: c
*/
#include <stdio.h>
#include <stdlib.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d",&n);
        int a[n];
        for (int j = 0; j < n; j++)
        {
            scanf("%d",&a[j]);
        }
        int b[n];
        for (int j = 0; j < n; j++)
        {
            b[j] = a[j];
        }
        for (int j = 0; j < n; j++)
        {
            for (int x = j+1; x < n; x++)
            {
                if (b[j] > b[x])
                {
                    int tmp = b[j];
                    b[j] = b[x];
                    b[x] = tmp;
                }
                
            }
        }
        
        
        int c[n];
        for (int j = 0; j < n; j++)
        {
            c[j] = abs(a[j]-b[j]);
        }
         
        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
        
        
        
    }
    return 0;
}