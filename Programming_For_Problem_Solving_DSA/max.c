#include<stdio.h>
int main(){
    int a[7] = {1,42,453,12,11,23,32131};
    int zuri = a[0];
    for (int i = 0; i < 7; i++)
    {
        if(zuri < a[i]){
            zuri = a[i];
        }
    }
   printf("%d",zuri);
    
    return 0;
}