#include <stdio.h>
#include <string.h>
int main(){
    char name[100];
    fgets(name,16,stdin);
    printf("%s",name);
    getchar();
}