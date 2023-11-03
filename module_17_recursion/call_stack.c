#include <stdio.h>
void hello2(){
    printf("Hello 2\n");
}
void hello1(){
    hello2();
    printf("Hello 1\n");
}
int main(){
    printf("Main\n");
    hello1();
    getchar();
}