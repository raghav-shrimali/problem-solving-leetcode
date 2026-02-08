/*
LeetCode 367 - Valid Perfect Square

Approach:
- Binary Search.

Time Complexity: O(log n)
Space Complexity: O(1)
*/
class Solution {
public:
    bool isPerfectSquare(int num) {
        long l = 1, r = num;
        while(l <= r){
            long mid = (l+r)/2;
            long sq = mid*mid;
            if(sq == num) return true;
            if(sq < num) l = mid+1;
            else r = mid-1;
        }
        return false;
    }
};
