/*
LeetCode 350 - Intersection of Two Arrays II

Approach:
- Store frequency of nums1 using unordered_map.
- Traverse nums2 and add common elements to result.

Time Complexity: O(n + m)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp;
        vector<int> ans;

        for (int x : nums1) {
            mp[x]++;
        }

        for (int x : nums2) {
            if (mp[x] > 0) {
                ans.push_back(x);
                mp[x]--;
            }
        }

        return ans;
    }
};
