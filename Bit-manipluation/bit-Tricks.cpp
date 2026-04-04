#include <iostream>
using namespace std;

int hammingWeight(unsigned int n) {
    int cnt = 0;
    while (n != 0) {
        n = n & (n - 1);  // remove lowest set bit
        cnt++;
    }
    return cnt;
}

int main() {
    unsigned int n;

    cout << "Enter number: ";
    cin >> n;

    cout << "Number of set bits: " << hammingWeight(n) << endl;

    return 0;
}