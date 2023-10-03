#include <stdio.h>

int main(){
    int tk;
    scanf("%d", &tk);
    if(tk >= 100){
        printf("Burger Khabo\n");
    }else if(tk >= 50){
        printf("Puska khabo\n");
    }else{
        printf("Kisuy Khabo Na\n");
    }
    return 0;
}