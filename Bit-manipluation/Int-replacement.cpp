#include <bits/stdc++.h>
using namespace std;
int integerRepcement(int n){
    long long num=n;
    int count =0;
    while(num != 1){
        if((num & 1)==0){

            num=num/2;


        }else {
            if(num==3 || ((num>>1)&1)==0){
                num=num-1;
            } else{
                num=num+1;
            }

        }
        count ++;
    }

    return count;

}
// // brute force
// int intReplace (int n){
//     long long num=n;
//     int count =0;
//     while(num !=1){
//         if(num &1){

//         }else{

//         }
//     }
// }
int main(){
    int n; 
    cin>>n;
    cout<<" Min operation require to number become one "<<integerRepcement(n);


}