#include <stdio.h>
int main(){
    int a, b,c;
    scanf("%d%d%d",&a,&b,&c);
    int sum = a+b+c;
    int avg = sum/2;
    printf("Average of 3 numbers = %d",avg);
    return 0;
}