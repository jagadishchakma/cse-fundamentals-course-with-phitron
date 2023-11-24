#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int max1 = max(12,44444444);
    int max2 = max({12,23,4,2,123,421,15});
    cout << max1 << endl << max2 << endl;
    return 0;
}