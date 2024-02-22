#include <bits/stdc++.h>
using namespace std;
int* myfunc(){
   int* a  = new int;
   cout << "Func: " << a << endl;;
   return a;
};
int main(){
    cout << myfunc();
    return 0;
}