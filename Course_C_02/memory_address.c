#include <stdio.h>
int main(){
    int a;
    a=10;
    int *b = &a;
    *b = 3434;
    printf("%d \n %d",*b, a);
    return 0;
}