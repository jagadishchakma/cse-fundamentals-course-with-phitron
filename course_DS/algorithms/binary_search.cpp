#include <bits/stdc++.h>
using namespace std;

int binary_search(int arr[], int n, int x){
    int right, left, mid;
    left = 0;
    right = n-1;
    while (left <= right)
    {
        mid = (left+right)/2;

        if(arr[mid] == x) return mid;
        
        if(arr[mid] > x) right = mid-1;
        else left = mid+1;
    }
}

int main(){
    int n, x;
    cin >> n >> x;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort(arr,arr+n);
    int index = binary_search(arr,n,x);
    cout << "Inex of " << index;
    return 0;
}