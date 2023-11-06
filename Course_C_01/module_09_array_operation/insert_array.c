#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) // step 01: input array
    {
        scanf("%d", &arr[i]);
    }
    // step 02: input insert value value and position
    int val;
    int pos;
    scanf("%d %d", &val, &pos);
    // step 03: create a new array that one size big from copying array
    int arr2[n+1];
    // step 04: form right side back to back array position changed while position is coming
    for (int i = n; 0 <= i; i--)
    {
        if(pos <= i){
            arr2[i] = arr[i-1];
        }else if(i < pos){
            arr2[i-1] = arr[i-1];
        }
    }
    // step 05: insert new array with her choose position
    arr2[pos-1] = val;
    // step 06: print new array
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr2[i]);
    }
    
    
    
    getchar();
}