#include <stdio.h>
int main(){
    for(int i = 1; i <=3; i=i+1){
        if(i%2 == 0){
            printf("Even: %d\n", i);
        }else{
           printf("Odd: %d\n", i);
        }
    };
    return 0;
}