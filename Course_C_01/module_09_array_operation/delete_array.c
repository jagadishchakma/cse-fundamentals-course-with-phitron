#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }

    int delIndex;
    scanf("%d", &delIndex);
    for (int i = delIndex; i < n; i++)
    {
        arr[delIndex] = arr[delIndex+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    getchar();
}