#include <iostream>
#include <bits/stdc++.h>

using namespace std;

void solve()
{
int n,k;
cin>>n>>k;
vector<int>arr(n);
int cnt=0;
for(int i=0;i<n;i++){
    cin>>arr[i];
    if(arr[i]==k){
        cnt++;
    }

}
if(cnt){
    cout<<"YES"<<"\n";
}else{
    cout<<"NO"<<"\n";
}

}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {
        solve();
    }

    return 0;
}

