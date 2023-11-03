#include <stdio.h>
int main(){
    char str[] = "Jagadish Chakma";
    int count  = 0;
    for (int i = 0; str[i]!='\0'; i++)
    {
        count++;
    }
    printf("%d", count);
    getchar();
}