#include <stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s = n-1; int k=1;
    for (int i = 1; i <= n+(n-1); i++)
    {
       for (int x = 1; x <= s; x++)
       {
        printf(" ");
       }

       if (i%2 == 0)
       {
        for (int  y = 1; y <= k; y++)
        {
            printf("-");
        }
       }else{
        for (int  y = 1; y <= k; y++)
        {
            printf("#");
        }
       }
       
       
       // condition
       if (i <= n-1)
       {
        s--;
        k+=2;
       }else{
        s++;
        k-=2;
       }
       
      
       printf("\n");
    }
    
    return 0;
}