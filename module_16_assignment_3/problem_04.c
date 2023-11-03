#include <stdio.h>
#include <string.h>
int is_palindrome(char str[]){
    int l = strlen(str)-1;
    int check;
    for (int i = 0; i < l; i++)
    {
        if (str[i] == str[l])
        {
            check =1;
        }else{
            check = 0;
            break;
        }
        l--;
    }
    return check;
}
int main(){
    char str[1001];
    scanf("%s",str);
    int check = is_palindrome(str);
    if (check)
    {
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    
    return 0;
}