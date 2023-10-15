#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int min = 0;
    int max = n-1;
    while (min < max)
    {
        int tmp = arr[min];
        arr[min] = arr[max];
        arr[max] = tmp;
        min++;
        max--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    
    
    getchar();
}