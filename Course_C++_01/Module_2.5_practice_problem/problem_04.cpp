#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    
    long long int maximum = 0;
    for (int i = 0; i < n; i++)
    {
       if(arr[i] > maximum){
        maximum = arr[i];
       }
    }
    cout << maximum << endl;

    return 0;
}