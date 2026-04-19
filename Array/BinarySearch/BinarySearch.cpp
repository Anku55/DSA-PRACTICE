#include <bits/stdc++.h>
using namespace std;

int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = (int)arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // not found
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n; 
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    int target;
    cin >> target;

    cout << binarySearch(arr, target) << "\n";
    return 0;
}