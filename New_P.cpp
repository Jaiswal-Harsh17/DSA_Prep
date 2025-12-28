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

// 2244. Minimum Rounds to Complete All Tasks

// 910. Smallest Range II
// class Solution {
// public:
//     int smallestRangeII(vector<int>& nums, int k) {
//           int n = nums.size();
//           if(n==1) return 0;

//           sort(nums.begin(), nums.end());
//           int res = (nums[n-1] - nums[0]); // Sort karne ke baad highest aur lowest ka diff
//           for(int i=0;i<n-1;i++){
//           int maxi = max(nums[n-1] - k, nums[i] + k);
//           int mini = min(nums[0] + k, nums[i+1] - k);
//             res = min(res, maxi - mini);
//           }
//           return res;
//     }
// };

// 1148. Article Views I
// Code:
// # Write your MySQL query statement below
// Select distinct viewer_id as id from Views where author_id = viewer_id order by id;  

// 525. Contiguous Array
// Code:
// class Solution {
// public:
//     int findMaxLength(vector<int>& nums) {
//         unordered_map<int, int> map {{0, -1}};
//         int sum = 0, ans=0;
//         for (int i=0; i<nums.size(); i++) {
//             sum += (nums[i] ? 1 : -1);
//             if (map.find(sum) != map.end()) {
//                 ans = max (ans, i-map[sum]);
//             }
//             else map[sum] = i;
//         }
//         return ans;
//     }
// };

// 2178. Maximum Split of Positive Even Integers
// Code:
// class Solution {
// public:
//     vector<long long> maximumEvenSplit(long long finalSum) {
//         vector<long long> result;
//         if (finalSum % 2 != 0) {
//             return {};
//         }
//         long long res = 2;
//         while (finalSum >= res) {
//             result.push_back(res);

//             finalSum = finalSum - res;
//             res = res+ 2;
//         }
//         if(finalSum>0){
            
//             result.back() = result.back()+finalSum;
//         }
//         return result;
//     }
// };

// 93. Restore IP Addresses
// Code:
// class Solution {
// private:
//     vector<string> res;
//     int n;
//     void backtrack(string& s, int idx, int dots, string& path) {
//         if (dots == 4){
//             if(idx == n){
//                 path.pop_back();
//                 res.push_back(path);
//             }
//             return;
//         }
//         int num = 0, len = path.size();
//         for (int i = idx; i < n; ++i) {
//             num = num * 10 + (s[i] - '0');
//             if (num > 255) break;
//             path.append(to_string(num)).push_back('.');
//             backtrack(s, i + 1, dots + 1, path);
//             path.resize(len);
//             if (s[idx] == '0') break;
//         }
//     }
// public:
//     vector<string> restoreIpAddresses(string s) {
//         n = s.length();
//         if (n < 4 || n > 12) return {};
//         string path;
//         path.reserve(n + 4);
//         backtrack(s, 0, 0, path);
//         return res;
//     }
// };

// 1318. Minimum Flips to Make a OR b Equal to c
// Code
// class Solution {
// public:
//     int minFlips(int a, int b, int c) {
//         int cnt = 0;
//         while (a != 0 || b != 0 || c != 0) {
//             if (a & 1 && !(c & 1)) cnt++;
//             if (b & 1 && !(c & 1)) cnt++;
//             if (!(a & 1) && !(b & 1) && (c & 1)) cnt++;
//             a >>= 1;
//             b >>= 1;
//             c >>= 1;
//         }
//         return cnt;
//     }
// };

// 2483. Minimum Penalty for a Shop

// 1351. Count Negative Numbers in a Sorted Matrix
// Code:
// class Solution {
// public:
//     int countNegatives(vector<vector<int>>& grid) {
//         int m=grid.size();
//         int n=grid[0].size();
//         int row=0;
//         int col=n-1;
//         int count=0;
//         for(int i=0;i<m;i++){
//             for(int j=0;j<n;j++){
//                 if(grid[i][j]<0){
//                     count++;
//                 }
//             }
//         }
        // while(row<m && col>=0){
        //     if(grid[row][col]<0){
        //         count+=(m-row);
        //         col--;
        //     }
        //     else{
        //         row++;
        //     }
        // }
//         return count;
//     }
// };