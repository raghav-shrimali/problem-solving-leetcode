/*
LeetCode 922 - Sort Array By Parity II

Approach:
- Place even numbers at even index and odd at odd index.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int> ans(nums.size());
        int even = 0, odd = 1;
        for (int x : nums) {
            if (x % 2 == 0) {
                ans[even] = x;
                even += 2;
            } else {
                ans[odd] = x;
                odd += 2;
            }
        }
        return ans;
    }
};
