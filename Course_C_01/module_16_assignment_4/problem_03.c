#include <stdio.h>
int count_before_one(int arr[], int size){
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 1)
        {
            break;
        }else{
            count++;
        }
        
    }
    return count;
    
}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n-1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int count = count_before_one(arr,sizeof(arr));
    printf("%d",count);
    
    return 0;
}