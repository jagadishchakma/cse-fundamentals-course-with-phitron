#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
       scanf("%d", &arr[i]);
    }
    int lastIndex = n-1;
    for (int i = 0; i < lastIndex; i++)
    {
        int tmp = arr[i];
        arr[i] = arr[lastIndex];
        arr[lastIndex]=tmp;
        lastIndex--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",arr[i]);
    }
    
    
    
    getchar();
}