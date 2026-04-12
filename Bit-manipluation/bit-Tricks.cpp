#include <bits/stdc++.h>
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
    // -------- Prefix XOR Problem --------
    vector<int> pref = {5, 2, 0, 3, 1};
    int n = pref.size();

    vector<int> arr(n);
    arr[0] = pref[0];

    for (int i = 1; i < n; i++) {
        arr[i] = pref[i] ^ pref[i - 1];
    }

    cout << "Reconstructed array: ";
    for (int x : arr) cout << x << " ";
    cout << "\n";

    // -------- Hamming Weight Problem --------
    unsigned int num;
    cout << "Enter number: ";
    cin >> num;

    cout << "Number of set bits: " << hammingWeight(num) << "\n";

    return 0;
}