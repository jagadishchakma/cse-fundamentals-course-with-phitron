#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
    int ind;
    scanf("%d",&ind);
    for (int i = ind; i < n; i++)
    {
        a[i] = a[i+1];
    }
    for (int i = 0; i < n-1; i++)
    {
        printf("%d ",a[i]);
    }
    
    
    
    return 0;
}