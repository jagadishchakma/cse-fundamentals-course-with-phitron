/*
Author: Jagadish Chakma
Date: 4-11-2023
language: c
*/

#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int min = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (min > arr[i])
        {
            min = arr[i];
        }
        
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (min == arr[i])
        {
            count++;
        }
    }
    if (count%2 != 0)
    {
       printf("Lucky\n");
    }else{
        printf("Unlucky\n");
    }
    return 0;
}