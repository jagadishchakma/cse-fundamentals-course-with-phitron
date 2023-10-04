#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int a; int i = 1;
    int b = 5;
    scanf("%d", &a);
    while(i <= a){
        if(i%b == 0){
            printf("%d Yes\n", i);
        }else{
            printf("%d No\n", i);
        }
        i++;
    }
    return 0;
}