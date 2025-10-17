//  Find the Missing Number (1 to N)

#include <iostream>
 using namespace std;
 int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int arr[n];
    cout<<"Enter array elements: ";
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int i = 0; i < n-1; i++) sum += arr[i];
    cout << "Missing: " << total - sum;
    return 0;
 }

//  Time Complexity: O(n)
//  Space Complexity: O(1)