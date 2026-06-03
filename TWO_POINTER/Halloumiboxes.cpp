#include <iostream>
#include <bits/stdc++.h>

using namespace std;
void solve() {
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   for(int i=0;i<n;i++){
    if(arr[i]+1 !=arr[i+1]||arr[i]-1!=arr[i+1]){
        cout<<"YES"<<"\n";

    }else{
        cout<<"NO"<<"\n";
    }
   }
}

int main() {
    // Fast I/O
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    // File redirection for local testing
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    // Your code goes here
    int t;
    cin >> t;

    while (t--) {
        solve();
    }


    return 0;
}
