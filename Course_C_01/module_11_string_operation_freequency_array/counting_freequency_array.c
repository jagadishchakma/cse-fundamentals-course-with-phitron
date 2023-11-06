#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count[7] = {0};
    for (int i = 0; i < n; i++)
    {
       int v = arr[i];
       count[v]++;
    }

    for (int i = 0; i < n; i++)
    {
         printf("%d - %d\n",i, count[i]);
    }
    
    
    getchar();
}