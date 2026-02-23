/*
LeetCode 995
Minimum Number of K Consecutive Bit Flips

Approach:
Greedy + Sliding Window + Difference Array

Time Complexity: O(N)
Space Complexity: O(N)
*/

class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> flip(n, 0);  // marks where flip effect ends
        int currentFlips = 0;    // how many flips affecting current index
        int totalFlips = 0;

        for(int i = 0; i < n; i++) {

            // Remove effect of expired flip
            if(i >= k) {
                currentFlips ^= flip[i - k];
            }

            // If current bit after flips is 0
            if((nums[i] ^ currentFlips) == 0) {

                // If we can't flip k elements
                if(i + k > n)
                    return -1;

                totalFlips++;
                currentFlips ^= 1;   // start new flip
                flip[i] = 1;         // mark flip start
            }
        }

        return totalFlips;
    }
};
