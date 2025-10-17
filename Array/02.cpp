// Reverse a number

#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int n = num;
    int rem, rev = 0;
    while(n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n /= 10;
    }
    cout<<"Reverse of "<<num<<" is "<<rev;
    return 0;
}

// T.C: O(n)
// S.C: O(1)