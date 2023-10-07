#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long int n;
    int d = 3;
    scanf("%lld", &n);
   
    if(n%d == 0){
        printf("YES \n");
    }else{
        printf("NO \n");
    }
       
 
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
