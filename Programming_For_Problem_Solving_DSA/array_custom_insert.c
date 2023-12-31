#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n+1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
    int ind,value;
    scanf("%d %d",&ind,&value);
    for (int i = n; i >= ind; i--)
    {
        a[i] = a[i-1];
    }
    a[ind] = value;
    printf("\n");
    for (int i = 0; i < n+1; i++)
    {
        printf("%d ",a[i]);
    }
    
    return 0;
}