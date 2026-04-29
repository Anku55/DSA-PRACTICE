#include <bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4],int target ,int row , int col){
    for(int col=0;col<4;col++){
        for(int row=0;row<3;row++){
            if(arr[row][col]==target)return true;
        }
    }
    return false;
}

void colSum(int arr[][4] ,int row , int col){
    for(int i=0;i<4;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum+=arr[j][i];
        }
        cout<<sum<<"  ";
    }

}
void rowSum(int arr[][4] ,int row , int col){
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        cout<<sum<<"  ";
    }

}

int largestRowSum(int arr[][4] ,int row , int col){
    int maxi=INT_MIN;
    int rowIndex =-1;
        for(int i=0;i<3;i++){
        int sum=0;
        
        for(int j=0;j<4;j++){
            sum+=arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
            rowIndex=i;

        }
    }
    cout<<"maximum row sum is "<<maxi<<endl;

    return rowIndex;

}

int main(){
    // initializing a 2-D Array
    int arr[3][4];
    // taking input 
    //- row wise

    cout<<"Enter the element of array \n";

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

    cout<<"Enter the element you want to search \n";
    int target;
    cin>>target;
    if(isPresent(arr , target, 3,4)){
        cout<<"Element is present";
    }else{
        cout<<"element is not present ";
    }

    cout<<endl;
    cout<<rowSum<<endl;
    rowSum(arr,3,4);
    
    cout<<"\n";
    colSum(arr,3,4);
    cout<<"\n";
    cout<<largestRowSum(arr ,3,4);
    // taking column wise input

    // for(int i=0;i<4;i++){
    //     for(int j=0;j<3;j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //     for(int i=0;i<3;i++){
    //     for(int j=0;j<4;j++){
    //         cout<< arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }

}