#include <iostream>
using namespace std;

bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

bool isPowerOfFour(int n) {
    if (n <= 0) return false;

    // condition 1: power of 2
    if ((n & (n - 1)) != 0) return false;

    // condition 2: bit at even position
    return (n & 0x55555555);
}
    bool isPowerOfFour2(int n) {
        if(n==1)return true;
        if(n<=0)return false;
        while(n>0){
            if(n%4==0){
                n=n/4;
                if(n==1) return true;
            }else{
                break;
            }     

        } 
        return false;
    }

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    if (isPowerOfTwo(n))
        cout << "Yes, Power of 2\n";
    else
        cout << "No, Not Power of 2\n";

        if (isPowerOfFour(n))
        cout << "Yes, Power of 4\n";
    else
        cout << "No, Not Power of 4\n";
        if (isPowerOfFour2(n))
        cout << "Yes, Power of 4\n";
    else
        cout << "No, Not Power of 4\n";

    return 0;
}