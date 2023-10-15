#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int del;
    scanf("%d", &del);
    for (int i = del-1; i < n; i++)
    {
        arr[i] = arr[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    getchar();
}