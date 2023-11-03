#include <stdio.h>
#include <string.h>
int main(){
    char digits[1000001];
    scanf("%s",digits);
    int sum = 0;
    for (int i = 0; i < strlen(digits); i++)
    {
       sum += (digits[i]-48);
    }
    printf("%d",sum);
    getchar();
}