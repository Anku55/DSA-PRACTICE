#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";

        for (int i = 2; i <= n; i++) {
            string temp = "";
            int count = 1;

            for (int j = 1; j < result.length(); j++) {
                if (result[j] == result[j - 1]) {
                    count++;
                } else {
                    temp += to_string(count) + result[j - 1];
                    count = 1;
                }
            }

            // Handle last group
            temp += to_string(count) + result.back();

            result = temp;
        }

        return result;
    }
};

int main() {
    Solution obj;

    int n;
    cout << "Enter n: ";
    cin >> n;

    string ans = obj.countAndSay(n);

    cout << "Count and Say result: " << ans << endl;

    return 0;
}