#include<stdio.h>
int main(){
    int a[8] = {1,2,3,4,5,6,7,8};
    void reverse_print(int i){
        if(i == 8) return;
        reverse_print(i+1);
        printf("%d\n",a[i]);
    }
    reverse_print(0);
    
    return 0;
}