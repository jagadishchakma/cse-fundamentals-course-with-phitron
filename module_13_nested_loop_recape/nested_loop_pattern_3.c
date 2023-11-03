#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (int z = 1; z <= i; z++)
        {
            printf("%d",z);
        }
        printf("\n");
        
    }
    
    getchar();
}