#include <bits/stdc++.h>
using namespace std;

int main(){
    // initializing a 2-D Array
    int arr[3][4];
    // taking input 
    //- row wise
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    // taking column wise input

    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
            cin>>arr[j][i];
        }
    }
    
        for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<< arr[i][j]<<" ";
        }
        cout<<"\n";
    }

}