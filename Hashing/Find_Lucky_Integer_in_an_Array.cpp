/*
============================================================
LeetCode Problem: 1394. Find Lucky Integer in an Array
Platform: LeetCode
Difficulty: Easy

Approach (Optimal - Frequency Counting):
1. Create a frequency array (or hash map) to count the occurrence of each number.
2. Traverse the input array and update the frequency of each element.
3. Iterate through the frequency array.
4. If a number is equal to its frequency, it is a lucky integer.
5. Keep track of the largest lucky integer found.
6. If no lucky integer exists, return -1.

Time Complexity:
O(n)

Space Complexity:
O(n)

Where:
n = size of the array

Topics:
- Array
- Hash Table
- Counting
============================================================
*/

class Solution {
public:
    int findLucky(vector<int>& arr) {

        unordered_map<int, int> freq;

        // Count the frequency of each element
        for (int num : arr) {
            freq[num]++;
        }

        int ans = -1;

        // Find the largest lucky integer
        for (auto it : freq) {
            if (it.first == it.second) {
                ans = max(ans, it.first);
            }
        }

        return ans;
    }
};
