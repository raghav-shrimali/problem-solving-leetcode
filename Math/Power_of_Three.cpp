/*
LeetCode 326 - Power of Three

Approach:
- Keep dividing by 3.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;
        while(n % 3 == 0) n /= 3;
        return n == 1;
    }
};
