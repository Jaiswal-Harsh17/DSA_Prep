// Leetcode Daily Problems
// 01/12/2025

// 2446. Determine if Two Events Have Conflict
// Code:
// class Solution {
// public:
//     bool haveConflict(vector<string>& event1, vector<string>& event2) {
//         string st1 = event1[0], et1 = event1[1], st2 = event2[0], et2 = event2[1];
//         if((et1 < st2) || (st1 > et2)) return false;
//         else return true;
//     }
// };

// 02/12/2025

// 171. Excel Sheet Column Number
// Code:
// class Solution {
// public:
//     int titleToNumber(string columnTitle) {
//         long long res = 0;
//         for(char ch:columnTitle){
//             int value = ch - 'A' + 1;
//             res = res * 26 + value;
//         }
//         return res;
//     }
// };

// 2211. Count Collisions on a Road
// Code:
// class Solution {
// public:
//     int countCollisions(string directions) {
//         int n = directions.length();
//         int i = 0;
//         while(i<n && directions[i] == 'L'){
//             i++;
//         } 
//         int j = n-1;
//         while(j>=0 && directions[j] == 'R'){
//             j--;
//         }
//         int count = 0;
//         while(i <= j){
//             if(directions[i] != 'S'){
//                 count += 1;
//             }
//             i++;
//         }
//         return count;
//     } 
// };

// 3432. Count Partitions with Even Sum Difference
// Code:
// class Solution {
// public:
//     int countPartitions(vector<int>& nums) {
//         int total = 0;
//         for(int num:nums){
//             total += num;
//         }
//         int n = nums.size();
//         if(total % 2 != 0) return 0;
//         else return n-1;
//     }
// };

// 1141. User Activity for the Past 30 Days I
// Code:
// # Write your MySQL query statement below
// SELECT activity_date AS day, COUNT(DISTINCT user_id) AS active_users
// FROM Activity
// WHERE (activity_date > "2019-06-27" AND activity_date <= "2019-07-27")
// GROUP BY activity_date;

// 3583. Count Special Triplets
// Code:
// int specialTriplets(vector<int>& nums) {
//     const int mod = 1e9 + 7;
//     int n   = nums.size();
//     int ans = 0;
//     for(int j = 0; j < n; j ++){
//         int Lcount = 0;
//         for(int i = 0; i < j; i ++){
//             if(nums[i] == nums[j] * 2){
//                 Lcount += 1;
//             }
//         }
//         int Rcount = 0;
//         for(int k = j + 1; k < n; k ++){
//             if(nums[k] == nums[j] * 2){
//                 Rcount += 1;
//             }
//         }
//         ans += (long long)Lcount * Rcount;
//     }
//     return ans % mod;
// }

// 846. Hand of Straights