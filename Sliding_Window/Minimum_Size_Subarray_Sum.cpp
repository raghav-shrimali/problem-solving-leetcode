/*
LeetCode Problem: 209
Title: Minimum Size Subarray Sum

Approach:
- Sliding Window
- Shrink window when sum >= target

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0;
        int sum = 0;
        int ans = INT_MAX;
        
        for(int right = 0; right < nums.size(); right++)
        {
            sum += nums[right];
            
            while(sum >= target)
            {
                ans = min(ans, right - left + 1);
                sum -= nums[left];
                left++;
            }
        }
        
        return ans == INT_MAX ? 0 : ans;
    }
};
