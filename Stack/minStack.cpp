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
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MinStack obj;

    obj.push(5);
    obj.push(2);
    obj.push(10);

    cout << obj.top() << "\n";     // 10
    cout << obj.getMin() << "\n";  // 2

    obj.pop();

    cout << obj.top() << "\n";     // 2
    cout << obj.getMin() << "\n";  // 2

    return 0;
}