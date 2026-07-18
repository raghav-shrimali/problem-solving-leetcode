// # LeetCode 977 - Squares of a Sorted Array

// ## Problem Details
// - **Platform:** LeetCode
// - **Problem Number:** 977
// - **Difficulty:** Easy

// ## Topics
// - Array
// - Two Pointers

// ## Approaches
// ### 1. Optimal Approach (Two Pointers)
// - Initialize two pointers:
//   - `start` at the beginning of the array.
//   - `end` at the end of the array.
// - Compare the squares of both ends.
// - Place the larger square at the current position of the result array.
// - Move the corresponding pointer inward.
// - Repeat until all elements are processed.

// - **Time Complexity:** O(n)
// - **Space Complexity:** O(n)


class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      vector<int> ans(nums.size());

      int start = 0;
      int end = nums.size()-1;

      int ptr = ans.size()-1;

      while(start <= end){
        int ss = nums[start] * nums[start];
        int es = nums[end] * nums[end];

        if(ss > es){
            ans[ptr] = ss;
            start++;
        }
        else{
            ans[ptr] = es;
            end--;
        }
        ptr--;
      }
      return ans;
    }
};

