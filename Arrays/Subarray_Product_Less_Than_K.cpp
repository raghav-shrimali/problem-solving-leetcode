/*
LeetCode Problem: 713
Title: Subarray Product Less Than K

Approach:
- Sliding Window
- Maintain product < k

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if(k <= 1) return 0;
        
        int left = 0;
        long long product = 1;
        int count = 0;
        
        for(int right = 0; right < nums.size(); right++)
        {
            product *= nums[right];
            
            while(product >= k)
            {
                product /= nums[left];
                left++;
            }
            
            count += (right - left + 1);
        }
        
        return count;
    }
};
