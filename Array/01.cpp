// Find the Maximum and Minimum Number in an array.

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {2,4,11,6,3,9,7,8};
    int maxElement = INT_MIN, minElement = INT_MAX;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++){
        if(arr[i]>maxElement) maxElement = arr[i];
        if(arr[i] < minElement) minElement = arr[i];
    }
    cout<<"MaxElement is: "<< maxElement <<" and MinElement is: "<<minElement;
    return 0;
}

// T.C: O(n)
// S.C: O(1)