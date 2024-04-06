#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        int maximum = a[0];
        int secondMaximum = a[0];
        int maximumIndex = 0;
        int secondMaximumIndex = 0;

        for(int i = 1; i<n; i++){
            if(a[i] > maximum){
                maximum = a[i];
                maximumIndex = i;
            }else if(a[i] > secondMaximum && a[i] < maximum){
                secondMaximum = a[i];
                secondMaximumIndex = i;
            }
        }
        if(maximumIndex < secondMaximumIndex){
            cout << maximumIndex << " " << secondMaximumIndex << endl;
        }else{
            cout << secondMaximumIndex << " " << maximumIndex << endl;
        }
    }
    return 0;
}