#include <bits/stdc++.h>
using namespace std;

    int getSum(int a, int b) {
        while (b != 0) {
            unsigned carry = (unsigned)(a & b) << 1;
            a = a ^ b;
            b = carry;
        }
        return a;
    }

int main (){
    int a, b;
    cin>>a>>b;
    cout<<"addition"<<getSum(a,b);



    return 0;

}