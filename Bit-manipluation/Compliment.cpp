#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findComplement(int num) {
        int mask = 0;
        int temp = num;

        // Step 1: Create mask with all bits = 1
        while (temp > 0) {
            mask = (mask << 1) | 1;
            temp >>= 1;
        }

        // Step 2: XOR with mask to flip bits
        return num ^ mask;
    }
};

int main() {
    Solution obj;
    
    int num = 5;
    
    cout << "Complement: " << obj.findComplement(num) << endl;

    return 0;
}