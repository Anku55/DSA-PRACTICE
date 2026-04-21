#include <bits/stdc++.h>
using namespace std;

class MinStack {
    stack<pair<int,int>> st;

public:
    MinStack() {}

    void push(int val) {
        if (st.empty()) st.push({val, val});
        else st.push({val, min(val, st.top().second)});
    }

    void pop() {
        if (!st.empty()) st.pop();
    }

    int top() {
        return st.top().first;
    }

    int getMin() {
        return st.top().second;
    }
};

int main() {
    


    MinStack obj;

    obj.push(5);
    obj.push(2);
    obj.push(10);

    cout << obj.top() << "\n";     
    cout << obj.getMin() << "\n";  

    obj.pop();

    cout << obj.top() << "\n";     
    cout << obj.getMin() << "\n";  

    return 0;
}