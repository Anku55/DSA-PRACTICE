#include <iostream>
#include <stack>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for(char ch : s) {

        // Opening brackets
        if(ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        }
        else {
            // Closing bracket but stack empty
            if(st.empty()) return false;

            char top = st.top();

            // Check matching
            if((ch == ')' && top == '(') ||
               (ch == '}' && top == '{') ||
               (ch == ']' && top == '[')) {
                st.pop();
            }
            else {
                return false;
            }
        }
    }

    return st.empty();
}

int main() {
    string s;
    cin >> s;

    if(isValid(s))
        cout << "Valid";
    else
        cout << "Invalid";
}