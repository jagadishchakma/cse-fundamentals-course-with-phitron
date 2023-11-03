#include <stdio.h>
#include <string.h>
int main(){
    char str[1001];
    scanf("%s", str);
    int count = strlen(str);
    int check = 1;
    for (int i = 0; i < count; i++)
    {
        char f = str[i];
        char l = str[count-1];
        if(f != l){
            check =0;
            break;
        }
        count--;
    }
    if (check){
        printf("YES");
    }else{
        printf("NO");
    }
    
    
    
    getchar();
}