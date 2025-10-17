// Find the second largest number in an array.
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[] = {10,120,4,45,99};
    int n = sizeof(arr)/sizeof(arr[0]);
    int first = INT_MIN, second = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] > first){
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first){
            second = arr[i];
        }
    }
    cout<<"Second largest element is: "<<second;
    return 0;
}

// T.C: O(n)
// S.C: O(1)