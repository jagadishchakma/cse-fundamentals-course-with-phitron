/*
Author: Jagadish Chakma
Date: 3-11-2023
language: c
*/

#include <stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    long long int arr[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%lld",&arr[i][j]);
        }
        
    }
    long long int x;
    scanf("%lld",&x);
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           if (arr[i][j] == x)
           {
            flag = 1;
           }
           
        }
        
    }
    if (flag)
    {
        printf("will not take number\n");
    }else{
        printf("will take number");
    }
    
    
    return 0;
}