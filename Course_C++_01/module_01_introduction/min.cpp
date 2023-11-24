#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int min1 = min(a,b);
    int min2 = min({a,b,c,d});
    cout << "min1= " << min1 << endl << "min2 = " << min2 << endl;
    return 0;
}