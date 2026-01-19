/*
LeetCode: 1539 - Kth Missing Positive Number

Approach:
- Binary search using missing count formula
- missing = arr[i] - (i + 1)

Time Complexity: O(log n)
Space Complexity: O(1)
*/

#include <vector>
using namespace std;

class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int left = 0, right = arr.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            int missing = arr[mid] - (mid + 1);

            if (missing < k)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return left + k;
    }
};
