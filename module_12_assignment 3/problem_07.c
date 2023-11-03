#include <stdio.h>
#include <string.h>
int main(){
    int t;
    scanf("%d",&t);
    for (int i = 0; i < t; i++)
    {
        int size;
        scanf("%d",&size);
        int arr[size];
        for (int i = 0; i < size; i++)
        {
            scanf("%d",&arr[i]);
        }
        int x;
        scanf("%d",&x);
        int check = 0;
        for (int i = 0; i < size; i++)
        {
            if(arr[i] == x){
                check++;
                break;
            }
        }
        if (check == 1)
        {
            printf("YES\n");
        }else{
            printf("NO\n");
        }
    }
    return 0;
}