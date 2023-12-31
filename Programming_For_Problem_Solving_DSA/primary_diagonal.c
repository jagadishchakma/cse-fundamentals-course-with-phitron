#include<stdio.h>

int main(){
    int rows,cols;
    scanf("%d %d",&rows,&cols);
    int arr[rows][cols];
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < cols; j++)
       {
        scanf("%d",&arr[i][j]);
       }
    }
    // ouput array
    for (int i = 0; i < rows; i++)
    {
       for (int j = 0; j < cols; j++)
       {
        printf("%d ", arr[i][j]);
       }
       printf("\n");
    }

    // primary diagonal matrix or not
    int flag = 1;
    if(rows != cols){
        flag = 0;
    }else{
        for (int i = 0; i < rows; i++)
        {
            for (int j = 0; j < cols; j++)
            {
                if(i == j){
                    continue;
                }
                if(arr[i][j] != 0){
                    flag = 0;
                    break;
                }
            }
        }
    }
    if(flag){
        printf("Primary Diagonal Matrix");
    }else{
        printf("Not Diagonal Matrix");
    }
    return 0;
}