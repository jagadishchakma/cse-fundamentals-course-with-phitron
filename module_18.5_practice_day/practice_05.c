/*
Author: Jagadish Chakma
Date: 2-11-2023
language: c
*/

#include <stdio.h>
long long int summation(long long int arr[],int n, int i){
    if (i == n) return 0;
    long long int result = summation(arr,n,i+1);
    return arr[i] + result;

}
int main(){
    int n;
    int i = 0;
    scanf("%d",&n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld",&arr[i]);
    }
    long long int result = summation(arr,n, i);
    printf("%lld\n",result);
    return 0;
}