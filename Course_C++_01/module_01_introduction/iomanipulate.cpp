#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    float a, b;
    while (cin >> a >> b)
    {
        cout << fixed << setprecision(1) << a << " " << b << endl;
    }
    
    return 0;
}