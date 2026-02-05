/*
LeetCode 349 - Intersection of Two Arrays

Problem:
Given two integer arrays, return their intersection.
Each element in the result must be unique.

Approach:
- Store elements of first array in a set.
- Traverse second array and add common elements to result set.

Time Complexity: O(n + m)
Space Complexity: O(n)
*/

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> s(nums1.begin(), nums1.end());
        unordered_set<int> res;

        for (int num : nums2) {
            if (s.count(num))
                res.insert(num);
        }
        return vector<int>(res.begin(), res.end());
    }
};
