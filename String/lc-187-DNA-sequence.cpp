#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>

class Solution {
public:
    void findRepeatedDnaSequences(const std::string& s) {
        std::unordered_set<std::string> seen;
        std::unordered_set<std::string> dup;

        const int n = static_cast<int>(s.size());

        for (int i = 0; i + 9 < n; ++i) {
            std::string sub = s.substr(i, 10);

            if (seen.find(sub) != seen.end()) {
                dup.insert(sub);
            } else {
                seen.insert(sub);
            }
        }

        
        for (const auto& str : dup) {
            std::cout << str << "\n";
        }
    }
};