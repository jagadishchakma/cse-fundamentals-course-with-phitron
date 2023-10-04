#include <stdio.h>

int main(){
    
    int a=3, b=20;
    // addition
    int sum=a+b;
    printf("Summation: %d\n", sum);
    

    // subtraction
    int sub = a-b;
    printf("Subtraction: %d\n", sub);

    // multiplication
    int mult = a*b;
    printf("Multiplication: %d\n", mult);

    // division
    float division = b*1.0/a;
    printf("Division: %f\n", division);

    // remainder 
    int rema = b % a;
    printf("Remainder: %d\n", rema);
    return 0;
}