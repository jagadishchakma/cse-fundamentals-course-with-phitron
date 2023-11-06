#include <stdio.h>
int main(){
    int n = 35;
    printf("%p\n",&n);
    int* n2 = &n;
    printf("%p\n",n2);
    printf("%d\n",*n2);
    *n2 = 40;
    printf("%d\n",n);
    getchar();
}