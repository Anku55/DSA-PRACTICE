#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    int one = 0;
    int two = 0;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] == 2)
        {
            two++;
        }
        else
        {
            one++;
        }
    }

    if (one == n)
    {
        cout << 1 << "\n";
        return;
    }
    if (two % 2 == 1)
    {
        cout << -1 << "\n";
        return;

    }
    else
    {
        int k = two / 2;
        int cnt = 0;
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == 2)
            {
                cnt++;
            if (cnt == k)
            {
                cout << i + 1 << "\n";
                return;
            }                
            }


        }
    }
}
int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}