#include <stdio.h>
#include <string.h>
int main(){
    char a;
    int count[26] = {0};
    while (scanf("%c",&a) != EOF)
    {
       int v = a-'a';
       count[v]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(count[i] > 0){
            printf("%c : %d\n", i+97, count[i]);
        }
    }
    
    

    return 0;
}