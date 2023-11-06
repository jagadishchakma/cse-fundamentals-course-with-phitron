#include <stdio.h>
int main(){
    char a; int b; float c; double d;
    scanf("%c %d %f %lf", &a, &b, &c, &d);
    printf("%c\n", a);
    printf("%d\n", b);
    printf("%f\n", c);
    printf("%lf\n", d);
    getchar();
}