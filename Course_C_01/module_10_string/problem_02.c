#include <stdio.h>
#include <string.h>
int main(){
    char str[1000001];
    fgets(str,1000001,stdin);
    printf("%s",str);
    getchar();
}