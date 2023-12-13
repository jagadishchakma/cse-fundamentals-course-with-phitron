#include <bits/stdc++.h>
using namespace std;
int binary_search(int a[], int n, int x){
    int left;
    int right;
    int mid;
    left = 0;
    right = n-1;
    int index = -1;
    while(left <= right){
        mid = (left+right)/2;
        if(a[mid] == x) index = mid;
        if(a[mid] > x) right = mid-1;
        else left = mid+1;
    }
    return index;
}
int main(){
    int n,q;
    cin >> n >> q;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a,a+n);
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        int result = binary_search(a,n,x);
        if(result >= 0) cout << "found" << endl;
        else cout << "not found" << endl;
    }
    
   
    return 0;
}