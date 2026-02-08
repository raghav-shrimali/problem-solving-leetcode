/*
LeetCode 594 - Longest Harmonious Subsequence

Approach:
- Use frequency map.
- Check consecutive numbers.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int x : nums) mp[x]++;
        int ans = 0;
        for(auto &p : mp)
            if(mp.count(p.first + 1))
                ans = max(ans, p.second + mp[p.first + 1]);
        return ans;
    }
};
