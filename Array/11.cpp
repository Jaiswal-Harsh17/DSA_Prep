// Leetcode - 1578. Minimum Time to Make Rope Colorful

// class Solution {
// public:
//     int minCost(string colors, vector<int>& neededTime) {
//         int totalTime = 0, currMaxTime = 0;
//         for (int i = 0; i < colors.size(); ++i) {
//             if (i > 0 && colors[i] != colors[i - 1]) {
//                 currMaxTime = 0;
//             }
//             totalTime += min(currMaxTime, neededTime[i]);
//             currMaxTime = max(currMaxTime, neededTime[i]);
//         }
//         return totalTime;
//     }
// };

// Leetcode - 2169. Count Operations to Obtain Zero
// class Solution {
// public:
//     int countOperations(int num1, int num2) {
//         int cnt = 1;
//         if(num1 != num2){
//             if(num1 >= num2){
//                 num1 = num1 - num2;
//                 cnt++;
//             }
//             if(num2 >= num1){
//                 num2 = num2 - num1;
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
// };

// 448. Find All Numbers Disappeared in an Array

// class Solution {
// public:
//     vector<int> findDisappearedNumbers(vector<int>& nums) {
//         vector<int>res;
//         int n = nums.size();
//         for(int i=0;i<n;i++){
//             int mark = abs(nums[i])-1;
//             if(nums[mark]>0){
//                 nums[mark] *= -1;
//             }
//         }
//         for(int i=0;i<n;i++){
//             if(nums[i]>0){
//                 res.push_back(i+1);
//             }
//         }
//         return res;
//     }
// };