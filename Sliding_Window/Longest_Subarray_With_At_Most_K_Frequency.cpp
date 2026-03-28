/*
LeetCode Problem: 2958
Title: Length of Longest Subarray With at Most K Frequency

Approach:
- Sliding Window + HashMap
- Maintain freq <= k

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        
        int left = 0;
        int ans = 0;
        
        for(int right = 0; right < nums.size(); right++)
        {
            freq[nums[right]]++;
            
            while(freq[nums[right]] > k)
            {
                freq[nums[left]]--;
                left++;
            }
            
            ans = max(ans, right - left + 1);
        }
        
        return ans;
    }
};
