#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=0;int k=n+(n-1);
    for (int i = 1; i <= n; i++)
    {
        for (int x = 0; x < s; x++)
        {
            printf(" ");
        }
        for (int y = 1; y <= k; y++)
        {
            printf("*");
        }
        s++;
        k-=2;
        printf("\n");
        
        
    }
    
    getchar();
}