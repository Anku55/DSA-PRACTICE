#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {

    string input;
    cout << "Enter string: ";
    cin >> input;

    vector<char> s(input.begin(), input.end());

    stack<char> st;

    // Push into stack
    for(int i = 0; i < s.size(); i++) {
        st.push(s[i]);
    }

    // Reverse using stack
    int i = 0;
    while(!st.empty()) {
        s[i] = st.top();
        st.pop();
        i++;
    }

    // Print result
    cout << "Reversed: ";
    for(char c : s) {
        cout << c;
    }

    return 0;
}