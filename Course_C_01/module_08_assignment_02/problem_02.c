#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    long long int n;
    scanf("%lld", &n);
    if (n > 0)
    {
       for (int i = 1; i <= n; i++)
       {
        printf("%d ", i);
       }
       
    }else{
        for (int i = n; 0 >= i; i=i+1)
        {
            printf("%d ", i);
        }
        
    }
      
    return 0;
}
