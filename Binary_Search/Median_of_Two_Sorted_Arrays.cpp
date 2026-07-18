/*
============================================================
LeetCode Problem: 4. Median of Two Sorted Arrays
Platform: LeetCode
Difficulty: Hard

Approach (Better Approach - Without Extra Space):
1. Initialize two pointers for both sorted arrays.
2. Traverse both arrays simultaneously as if performing the merge step of Merge Sort.
3. Instead of storing the merged array, keep track of only the last two processed elements
   (prev and curr), since these are sufficient to determine the median.
4. Continue the traversal until reaching the middle position of the combined arrays.
5. If the total number of elements is odd, return the current element.
6. If the total number of elements is even, return the average of the previous and current elements.

Time Complexity:
O(m + n)
where:
m = size of nums1
n = size of nums2

Space Complexity:
O(1)
No extra array is used; only a few variables are maintained.

Topics:
- Array
- Two Pointers
- Merge Technique

============================================================
*/

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int m = nums1.size();
        int n = nums2.size();
        int total = m + n;

        int i = 0, j = 0;
        int prev = 0, curr = 0;

        for (int count = 0; count <= total / 2; count++) {

            prev = curr;

            if (i < m && (j >= n || nums1[i] <= nums2[j])) {
                curr = nums1[i];
                i++;
            } else {
                curr = nums2[j];
                j++;
            }
        }

        if (total % 2 == 1)
            return curr;

        return (prev + curr) / 2.0;
    }
};
