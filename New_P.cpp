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