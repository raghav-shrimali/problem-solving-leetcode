/*
LeetCode Problem: 974
Title: Subarray Sums Divisible by K

Approach:
- Prefix Sum + Modulo + HashMap
- Count same remainders

Time Complexity: O(N)
Space Complexity: O(K)
*/

class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        mp[0] = 1;
        
        int sum = 0, count = 0;
        
        for(int num : nums)
        {
            sum += num;
            int rem = sum % k;
            
            if(rem < 0)
                rem += k;
            
            count += mp[rem];
            mp[rem]++;
        }
        
        return count;
    }
};
