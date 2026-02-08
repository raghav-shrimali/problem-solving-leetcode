/*
LeetCode 628 - Maximum Product of Three Numbers

Approach:
- Sort array.
- Compare product of largest three vs two smallest & largest.

Time Complexity: O(n log n)
Space Complexity: O(1)
*/
class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return max(nums[n-1]*nums[n-2]*nums[n-3],
                   nums[0]*nums[1]*nums[n-1]);
    }
};
