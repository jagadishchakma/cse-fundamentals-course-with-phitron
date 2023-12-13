#include <bits/stdc++.h>
using namespace std;
int linear_search(int arr[], int n, int s){
    for (int i = 0; i < n; i++)
    {
        if(arr[i] == s) return i;
    }
    return -1;
    
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    int s_value = 90;
    int n = sizeof(arr);
    int index = linear_search(arr,n,s_value);
    cout << index;
    return 0;
}