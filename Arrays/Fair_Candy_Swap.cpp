/*
LeetCode 888 - Fair Candy Swap

Approach:
- Use math + hash set.
- Balance sums.

Time Complexity: O(n)
Space Complexity: O(n)
*/
class Solution {
public:
    vector<int> fairCandySwap(vector<int>& A, vector<int>& B) {
        int sumA = accumulate(A.begin(), A.end(), 0);
        int sumB = accumulate(B.begin(), B.end(), 0);
        int diff = (sumA - sumB) / 2;
        unordered_set<int> st(A.begin(), A.end());
        for(int b : B)
            if(st.count(b + diff))
                return {b + diff, b};
        return {};
    }
};
