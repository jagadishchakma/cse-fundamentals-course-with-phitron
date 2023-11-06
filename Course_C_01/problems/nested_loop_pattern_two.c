#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sln = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int z = 1; z <= n+sln; z++)
        {
            if ((n-i) >= z)
            {
                printf(" ");
            }else{
                printf("*");
            }
            
        }
        printf("\n");
        sln++;
        
    }
    
    getchar();
}