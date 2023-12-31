#include<stdio.h>
int main(){
    int n = 6;
    int a[6] = {1,2,3,4,5,6};
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    int start = 0;
    int last = n-1;
    while (start < last)
    {
       int tmp = a[start];
       a[start] = a[last];
       a[last] = tmp;
       start++;
       last--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    
    
    return 0;
}