#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    
    int m;
    scanf("%d",&m);
    int b[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d",&b[i]);
    }
    
    int two[n+m-1];
    for (int i = 0; i < n+m; i++)
    {
        if(i > n-1){
            two[i] = b[i-n];
        }else{
            two[i] = a[i];
        }
    }

    for (int i = 0; i < n+m; i++)
    {
        printf("%d\n",two[i]);
    }
    
    
    return 0;
}