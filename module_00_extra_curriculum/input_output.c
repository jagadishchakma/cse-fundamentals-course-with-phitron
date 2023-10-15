#include <stdio.h>
int main(){
    char a;
    int b;
    float c;
    double d;
    printf("Memory size: %d byte\n", sizeof(a));
    printf("Memory size: %d bytes\n", sizeof(b));
    printf("Memory size: %d bytes\n", sizeof(c));
    printf("Memory size: %d bytes\n", sizeof(d));
    return 0;
}