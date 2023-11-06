#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s = n-1;
    for (int i = 1; i <= n; i++)
    {
       for (int i = 1; i <= s; i++)
       {
        printf(" ");
       }
       
       for (int j = i; j >= 1; j--)
       {
        printf("%d",j);
       }
        s--;
       printf("\n");
       
    }
    
    return 0;
}