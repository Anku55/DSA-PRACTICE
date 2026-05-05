#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>n>>m;
    vector<int>adj[n+1];
    for(int i =0;i<m;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);

        // if we are implimenting directed graph
        // than there is no need to use below line

        //adj[v].push_back(u);
        // TC --- O(E)

    }

    return 0;
}