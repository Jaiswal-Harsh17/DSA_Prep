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

// 2441. Largest Positive Integer That Exists With Its Negative
// Code:
// class Solution {
// public:
//     int findMaxK(vector<int>& nums) 
//     {
//         sort(nums.begin(), nums.end());
//         int low=0, high=nums.size()-1;
//         while(low < high){
//             if((nums[low] + nums[high]) == 0){
//                 return  nums[high];
//             }
//             else if((nums[low] + nums[high]) < 0)
//                 low++;
//             else high--;
//         }
//         return -1;
//     }
// };

// 2256. Minimum Average Difference
// Code:
// class Solution {
// public:
//     int minimumAverageDifference(vector<int>& nums) {
//         long totalsum = 0, currentsum = 0;
//         int n = nums.size();
//         for(auto i : nums)
//             totalsum += i;
//         int mini = INT_MAX;
//         int indexans = 0;
//         for(int i=0; i<n; i++){
//             currentsum += nums[i];
//             int avg1 = currentsum/(i+1);
//             if(i==n-1){
//                 if(avg1<mini)
//                     return n-1;
//                 else
//                     break;
//             }
//             int avg2 = (totalsum - currentsum)/(n-i-1);
//             if(abs(avg1-avg2)<mini)
//             {
//                 mini = abs(avg1-avg2);
//                 indexans = i;
//             }
//         }
        
//         return indexans;
//     }
// };

// 66. Plus One
// code:
// class Solution {
// public:
//     vector<int> plusOne(vector<int>& digits) {
//         int n = digits.size();
//         for(int i=n-1;i>=0;i--){
//             if(i==n-1)
//                 digits[i]++;
//             if(digits[i]==10){
//                 digits[i]=0;
//                 if(i!=0){
//                     digits[i-1]++;
//                 }
//                 else{
//                     digits.push_back(0);
//                     digits[i]=1;
//                 }
//             }
//         }
//         return digits;
//     }
// };

// 910. Smallest Range II
// Code:
// class Solution {
// public:
//     int smallestRangeII(vector<int>& nums, int k) {
//           int n = nums.size();
//           if(n==1) return 0;
//           sort(nums.begin(), nums.end());
//           int res = (nums[n-1] - nums[0]); 
//           for(int i=0;i<n-1;i++){
//           int maxi = max(nums[n-1] - k, nums[i] + k);
//           int mini = min(nums[0] + k, nums[i+1] - k);
//             res = min(res, maxi - mini);
//           }
//           return res;
//     }
// };

// 1390. Four Divisor
// Code:
// class Solution {
// public:
//     int sumFourDivisors(vector<int>& nums) {
//         int div_sum = 0;

//         for (int n : nums) {
//             int div_count = 0, in_sum = 0;

//             for (int d = 1; d * d <= n; d++) {
//                 if (n % d == 0) {
//                     int other = n / d;

//                     if (d == other) {
//                         div_count++;
//                         in_sum += d;
//                     } else {
//                         div_count += 2;
//                         in_sum += d + other;
//                     }

//                     if (div_count > 4)
//                         break;
//                 }
//             }

//             if (div_count == 4)
//                 div_sum += in_sum;
//         }

//         return div_sum;
//     }
// };

// 93. Restore IP Addresses
// Code:


// 3301. Maximize the Total Height of Unique Towers
// Code:
// class Solution {
// public:
//     long long maximumTotalSum(vector<int>& maximumHeight) {
//         sort(maximumHeight.begin(), maximumHeight.end());
//         int n = maximumHeight.size();
//         long long ans=0;
//         int prev=maximumHeight[n-1]+1, h=-1;
//         for(int i=n-1; i>=0; i--){
//             h = maximumHeight[i];
//             if(prev <= h ){
//                 h = prev - 1;
//             }
//             if(h == 0) return -1;
//             ans +=h;
//             prev = h;
//         }
//         return ans;
//     }
// };

// 852. Peak Index in a Mountain Array
// Code:
// class Solution {
// public:
//     int peakIndexInMountainArray(vector<int>& arr) {
//     int n=arr.size();
// 	int l=0,r=n-1,mid;
// 	while(l<r)
// 	{
// 		mid=(l+r)/2;
// 		if(arr[mid]<arr[mid+1]){
// 			l=mid+1;
// 		}
// 		else{
// 			r=mid;
// 		}
// 	}
//     return l;
// }
// };

// 3315. Construct the Minimum Bitwise Array II
// Code :
// class Solution{
// public:
//     vector<int> minBitwiseArray(vector<int>& nums){
//         int n=nums.size();
//         vector<int> ans(n);
//         for(int i=0;i<n;i++){
//             int a=nums[i];
//             int b=a+1;
//             if(a==2){
//                 ans[i]=-1;
//             }
//             else{
//                 ans[i]=a-((b)&(-b))/2;
//             }
//         }
//         return ans;
//     }
// };

// 3507. Minimum Pair Removal to Sort Array I
// Code:
// class Solution {
// public:
//     int minimumPairRemoval(vector<int>& nums) {
//         int operations = 0;
//         while(true){
//             bool isSorted = true;
//             for(int i = 0; i < nums.size() - 1;i++){
//                 if(nums[i] > nums[i+1]){
//                     isSorted = false;
//                 }
//             }
//             if(isSorted) return operations;
//             int minSum = INT_MAX;
//             int index;
//             for(int i = 0; i < nums.size() - 1; i++){
//                 int currentSum = nums[i] + nums[i+1];
//                 if(minSum > currentSum){
//                     minSum = currentSum;
//                     index = i;
//                 }
//             }
//             nums[index] = minSum;
//             nums.erase(nums.begin() + index + 1);
//             operations++;
//         }
//     }
// };

// 1200. Minimum Absolute Difference
// Code:
// class Solution {
// public:
//     vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
//         sort(arr.begin(), arr.end());
//         vector<vector<int>>ans;
//         int min_diff = arr[1] - arr[0];
//         for(int i=0;i<arr.size()-1;i++){
//             min_diff = min(min_diff, arr[i+1] - arr[i]);
//         }   
//         for(int i=0;i<arr.size()-1;i++){
//             if(arr[i+1] - arr[i] == min_diff){
//                 ans.push_back({arr[i], arr[i+1]});
//             }
//         }
//         return ans;
//     }
// };

// 2908. Minimum Sum of Mountain Triplets I
// Code:


// 279. Perfect Squares
// Code:
// class Solution:
//     def numSquares(self, n: int) -> int:
//         def solve(n):
//             if n == 0:
//                 return 0
//             elif n in memo:
//                 return memo[n]
//             else:
//                 # ans = n
//                 ans = float('inf')
//                 i = 1
//                 while ((i*i) <= n):
//                     ans = min(ans, 1 + solve(n-(i*i)))
//                     memo[n] = ans
//                     i+=1
//                 return ans
//         memo = {}
//         return solve(n)

// 1726. Tuple with Same Product
// Code:
// class Solution {
// public:
//     int tupleSameProduct(vector<int>& nums) {
//         unordered_map<int,int>prod_count;
//         int count = 0, n = nums.size();
//         for(int i=0;i<n;i++){
//             for(int j=i+1;j<n;j++){
//                 int product = nums[i]*nums[j];
//                 count += 8 * prod_count[product];
//                 prod_count[product]++;
//             }
//         }
//         return count;
//     }
// };

// 3010. Divide an Array Into Subarrays With Minimum Cost I
// Code:
// class Solution {
// public:
//     int minimumCost(vector<int>& nums) {
//         int first = nums[0];
//         sort(nums.begin() + 1, nums.end());
//         return first + nums[1] + nums[2];
//     }
// };