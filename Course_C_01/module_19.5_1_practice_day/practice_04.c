/*
Author: Jagadish Chakma
Date: 5-11-2023
language: c
*/
#include <stdio.h>
int main(){
    int n,k;
    scanf("%d %d",&n,&k);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
           if (arr[i] < arr[j])
           {
             int tmp = arr[i];
             arr[i] = arr[j];
             arr[j] = tmp;
           }
           
        }
        
    }
    long long int sum = 0;
    for (int i = 0; i < k; i++)
    { 
        if (arr[i] >= 0)
        {
           sum += arr[i];
        }
        
    }
    printf("%lld",sum);
    
    return 0;
}