#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    int i = 1;
    int d1 = 3;
    int d2 = 7;
    scanf("%d", &n);
    while(i <= n){
        if(i%d1 == 0 && i%d2 == 0){
            printf("%d \n", i);
        }
        i++;
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
