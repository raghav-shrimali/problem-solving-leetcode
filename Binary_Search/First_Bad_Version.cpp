/*
LeetCode 278 - First Bad Version

Approach: Binary Search
Time Complexity: O(log n)
Space Complexity: O(1)
*/

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1, high = n;

        while (low < high) {
            int mid = low + (high - low) / 2;
            if (isBadVersion(mid))
                high = mid;
            else
                low = mid + 1;
        }
        return low;
    }
};
