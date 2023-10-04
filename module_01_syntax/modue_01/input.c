
// add.c
#include <stdio.h>
#include "input.h"
int input(){
    int a, b;
    scanf("%dx %dx", &a, &b);
    printf("%dx %dx", a, b);
};

int sum() {
    int a, b;
    scanf("%d %d", &a,&b);
    int result = a + b;
    printf("%d", result);
    input();
}
