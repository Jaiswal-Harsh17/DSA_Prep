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

// Leetcode Question - 1526

class Solution {
public:
    int minNumberOperations(vector<int>& target) {
        int count = target[0];
        for (int i = 1; i < target.size(); i++)
            count += max(target[i] - target[i - 1], 0);
        return count;
    }
};