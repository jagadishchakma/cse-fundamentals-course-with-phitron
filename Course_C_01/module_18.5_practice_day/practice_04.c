/*
Author: Jagadish Chakma
Date: 2-11-2023
language: c
*/
#include <stdio.h>
void get_even(int arr[],int n, int i){
    if (i >= n) return;
    
    get_even(arr, n, i+1);
    if (i%2 == 0)
    {
        printf("%d ",arr[i]);
    }
    
}
int main(){
    int n;
    int i = 0;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    get_even(arr,n,i);
    return 0;
}