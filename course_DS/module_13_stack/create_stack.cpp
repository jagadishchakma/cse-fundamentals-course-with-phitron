#include <bits/stdc++.h>
using namespace std;
int main(){
    class myStack{
        vector<int> roll;
        public:
        void push(int val){
            roll.push_back(val);
        }
        void pop(){
            roll.pop_back();
        }
        int top(){
            return roll.back();
        }
        int size(){
            return roll.size();
        }
        bool empty(){
            if(roll.size() == 0) return true;
            else return false;
        }
    };
    myStack st;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        st.push(x);
    }

    while (st.empty() == false)
    {
       cout << st.top() << endl;
       st.pop();
    }
    
    
    return 0;
}