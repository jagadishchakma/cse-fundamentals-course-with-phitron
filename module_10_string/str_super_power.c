#include <stdio.h>
int main(){
    // char name[10] = {'j','a','g','a','d','i','s','h'};
    char name[] = "Jagadish Chakma School";
    int size = sizeof(name);
    printf("%d", size);
    printf("%s", name);
    getchar();
}