#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for (int i = n; 1 <= i; i--)
    {
        for (int z = i; 1 <= z; z--)
        {
            printf("*");
        }
        printf("\n");
        
    }
    
    
    
    getchar();
}