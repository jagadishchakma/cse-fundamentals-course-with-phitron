#include <stdio.h>
int main(){
    int num1,num2,num3;
    scanf("%d %d %d",&num1,&num2,&num3);
    int sum = num1+num2+num3;
    float avg = sum*1.00/3;
    printf("%d %.1f",sum,avg);
    return 0;
}