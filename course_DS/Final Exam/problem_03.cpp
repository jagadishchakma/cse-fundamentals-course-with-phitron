#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    getchar();
    for (int i = 1; i <= t; i++)
    {
        string s;
        getline(cin,s);
        stringstream ss(s);
        // map
        map<string,int> myMap;
        string word;
        //count
        int maxCount = 0;
        string maxKey;
        while(ss >> word){
            myMap[word]++;
            if(maxCount < myMap[word]){
                maxCount = myMap[word];
                maxKey = word;
            }
            
        }
        cout << maxKey << " " << maxCount << endl;
    }
    
    return 0;
}