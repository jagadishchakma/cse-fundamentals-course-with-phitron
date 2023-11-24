#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
       cin >> arr[i];
    }
    int l = n-1;
    int flag = 1;
    for (int i = 0; i < l; i++)
    {
        if(arr[i] != arr[l]){
            flag = 0;
            break;
        }
        l--;
    }
    if(flag){
        cout << "YES";
    }else{
        cout << "NO";
    }
    
    return 0;
}