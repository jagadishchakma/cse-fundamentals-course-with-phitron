#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int sln = 0;
    for (int i = n; i >= 1; i--)
    {
        for (int z = (i+(n-)); z >= ; z++)
        {
           if (sln >= z)
           {
            printf(" ");
           }else{
            printf("*");
           }
           
        }
        sln=sln+2;
        printf("\n");

        
    }
    
    getchar();
}