#include <stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int sum = a+b;
    // type casting one way
    float avg = sum*1.0/2;
    printf("Type casting one = %f",avg);
    // type casting two way
    float svg2 = sum/(float)2;
    printf("Type casting two way = %f",svg2);
    return 0;
}