/*******************************************************
 * LeetCode Question No. 137
 * Problem Name     : Single Number II
 *
 * Problem Statement:
 * Given an integer array nums where every element appears
 * three times except for one, which appears exactly once.
 * Find the single element and return it.
 *
 * You must implement a solution with linear time complexity
 * and constant extra space.
 *******************************************************/

class Solution {
public:
    int singleNumber(vector<int>& nums) {

        /*******************************************************
         * Approach:
         * We use bit manipulation with two variables:
         * - ones  : stores bits appearing once
         * - twos  : stores bits appearing twice
         *
         * For every number:
         * - Update 'ones' by XOR and remove bits present in 'twos'
         * - Update 'twos' by XOR and remove bits present in 'ones'
         *
         * Bits appearing three times are automatically removed.
         *******************************************************/

        int ones = 0, twos = 0;

        for (int num : nums) {
            ones = (ones ^ num) & ~twos;
            twos = (twos ^ num) & ~ones;
        }

        /*******************************************************
         * The number that appears only once will remain in 'ones'
         *******************************************************/
        return ones;
    }
};

/*******************************************************
 * Time Complexity  : O(n)
 * Space Complexity : O(1)
 *******************************************************/
