#include <stdio.h>
int main(){
    int a = 4569;
    int r1 = 4569%1000;
    int r2 = r1%100;
    int r3 = r2/10;
    printf("%d", r3);
    return 0;
}