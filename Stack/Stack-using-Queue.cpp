#include <bits/stdc++.h>
using namespace std;

class MyStack {
private:
    queue<int> q;

public:
    void push(int x) {
        q.push(x);

        // rotate queue to bring new element to front
        int sz = q.size();
        for (int i = 0; i < sz - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    MyStack st;

    st.push(1);
    st.push(2);
    st.push(3);

    cout << "Top: " << st.top() << "\n"; // 3
    cout << "Pop: " << st.pop() << "\n"; // 3
    cout << "Top: " << st.top() << "\n"; // 2

    return 0;
}