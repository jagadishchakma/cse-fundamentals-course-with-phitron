#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int x){
    int left = 0;
    int right = n-1;
    int mid;
    while(left <= right){
        mid = (left+right)/2;
        if(arr[mid] == x){
            return mid;
        }
        if(arr[mid] > x){
            right = mid-1;
        }else{
            left = mid+1;
        }
    }
};
int main(){
    int n,x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    
    // binary search
    int value = binary_search(arr,n,x);
    cout << value;

    return 0;
}