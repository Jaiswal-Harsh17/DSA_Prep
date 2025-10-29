// Leetcode Problem No - 3370
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int x = 1;
    while((x-1) < n){
        x = x * 2;
    }
    cout<<x-1;
    return 0;
}