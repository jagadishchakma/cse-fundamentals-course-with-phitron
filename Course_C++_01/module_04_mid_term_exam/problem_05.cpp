#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++)
    {
        int n,s;
        cin >> n >> s;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                for (int l = j+1; l < n; l++)
                {
                    if((arr[i] + arr[j] + arr[l]) == s){
                        flag = 1;
                        break;
                    }
                }
                
            }
            
        }
        if(flag == 1){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
        
        
    }
    
    return 0;
}