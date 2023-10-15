#include <stdio.h>
int main(){
    int n1;
    scanf("%d", &n1);
    int arr1[n1];
    for (int i = 0; i < n1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    int n2;
    scanf("%d", &n2);
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int n3 = n1+n2;
    int arr3[n3];
    int tmp = 0;
    for (int i = 0; i < n3; i++)
    {
        
        if(i < n1){
            arr3[i] = arr1[i];
        }else{
            arr3[i] = arr2[tmp];
            tmp++;
        }
    }
    for (int i = 0; i < n3; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    
    
    getchar();
}