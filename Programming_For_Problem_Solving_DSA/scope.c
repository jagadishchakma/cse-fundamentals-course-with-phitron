#include<stdio.h>
int main(){
    int num = 10;
    int* point = &num;
    printf("%p", point);
    return 0;
}
