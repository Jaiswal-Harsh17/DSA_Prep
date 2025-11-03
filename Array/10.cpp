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

// class Solution {
// public:
//     int minNumberOperations(vector<int>& target) {
//         int count = target[0];
//         for (int i = 1; i < target.size(); i++)
//             count += max(target[i] - target[i - 1], 0);
//         return count;
//     }
// };

// Leetcode Question - 3289

// class Solution {
// public:
//     vector<int> getSneakyNumbers(vector<int>& nums) {
//         unordered_map<int,int>mpp;
//         vector<int>ans;
//         for(int num:nums){
//             mpp[num]++;
//         }
//         for(auto it:mpp){
//             if(it.second > 1){
//                 ans.push_back(it.first);
//             }
//         }
//         return ans;
//     }
// };

// Leetcode - 3217

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
// class Solution {
// public:
//     ListNode* modifiedList(vector<int>& nums, ListNode* head) {
//         int n = nums.size();
//         unordered_map<int,bool>mpp;
//         for(int i=0;i<n;i++){
//             mpp[nums[i]] = true;
//         }
//         ListNode* temp = head;
//         ListNode* InitTemp;
//         bool flag = false;
//         while(temp != NULL){
//             if(!mpp[temp->val]){
//                 if(!flag){
//                     flag = true; 
//                     head = temp;
//                     InitTemp = head;
//                 }
//                 else{
//                     InitTemp->next = temp;
//                     InitTemp = temp;
//                 }
//             }
//             temp = temp->next;
//         }
//         InitTemp->next = NULL;
//         return head;
//     }
// };

