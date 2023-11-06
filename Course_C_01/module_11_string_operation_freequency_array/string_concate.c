#include <stdio.h>
#include <string.h>
int main(){
    char str1[100],str2[100];
    scanf("%s %s", str1, str2);
    int length2 = strlen(str2);
    int length1 = strlen(str1);
    for (int i = 0; i <= length2; i++)
    {
       str1[length1] = str2[i];
       length1++;
    }

    printf("%s",str1);
    
    getchar();
}