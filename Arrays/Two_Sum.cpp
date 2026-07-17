// // LeetCode 1: Two Sum
// // Approach: Hash Map
// // Time Complexity: O(n)
// // Space Complexity: O(n)

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int, int> mp;

//         for (int i = 0; i < nums.size(); i++) {
//             int complement = target - nums[i];

//             if (mp.find(complement) != mp.end()) {
//                 return {mp[complement], i};
//             }

//             mp[nums[i]] = i;
//         }

//         return {};
//     }
// };

//  Another Best Approach to solve these question

/*
===============================================================================
LeetCode Problem: 1. Two Sum
Difficulty: Easy

Topic:
- Arrays

Approach (Brute Force):
1. Traverse the array using two nested loops.
2. For each element, check every remaining element.
3. If the sum of the two elements equals the target,
   return their indices immediately.
4. The problem guarantees exactly one valid solution.

Time Complexity: O(n²)
- The outer loop runs n times.
- The inner loop runs up to (n - 1) times.
- In the worst case, every pair of elements is checked.

Space Complexity: O(1)
- No extra data structure is used.
===============================================================================
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        for (int i = 0; i < nums.size(); i++) {

            for (int j = i + 1; j < nums.size(); j++) {

                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }

        return {};
    }
};
