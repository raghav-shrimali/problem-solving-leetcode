/*
LeetCode 507 - Perfect Number

Approach:
- Sum all divisors excluding the number itself.

Time Complexity: O(sqrt(n))
Space Complexity: O(1)
*/
class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num <= 1) return false;
        int sum = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                if (i != num / i) sum += num / i;
            }
        }
        return sum == num;
    }
};
