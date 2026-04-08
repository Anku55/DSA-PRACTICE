#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // 🔹 LC 136: Single Number
    int singleNumber(vector<int>& nums) {
        int result = 0;
        for (int num : nums) {
            result ^= num;
        }
        return result;
    }

    // 🔹 LC 268: Missing Number
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int result = n;

        for (int i = 0; i < n; i++) {
            result ^= i;
            result ^= nums[i];
        }
        return result;
    }

    // 🔹 LC 389: Find the Difference
    char findTheDifference(string s, string t) {
        int result = 0;

        for (char c : s) {
            result ^= c;
        }
        for (char c : t) {
            result ^= c;
        }

        return (char)result;
    }
};

// 🔹 Driver Code (for testing in VS Code)
int main() {
    Solution sol;

    // ===== Test LC 136 =====
    vector<int> nums1 = {2, 2, 1};
    cout << "Single Number: " << sol.singleNumber(nums1) << endl;

    // ===== Test LC 268 =====
    vector<int> nums2 = {3, 0, 1};
    cout << "Missing Number: " << sol.missingNumber(nums2) << endl;

    // ===== Test LC 389 =====
    string s = "abcd";
    string t = "abcde";
    cout << "Find the Difference: " << sol.findTheDifference(s, t) << endl;

    return 0;
}