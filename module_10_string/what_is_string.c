#include <stdio.h>
#include <string.h>

int main(){
    char str[20];
    fgets(str,20,stdin);
    printf("%s",str);
    return 0;
}