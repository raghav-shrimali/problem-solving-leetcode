// 💡 Approach (Greedy)

// You can make profit every time there is an increase from one day to the next.

// If prices[i] > prices[i-1], add the difference to profit.

// This simulates buying before the rise and selling at the peak.

// Time and Space Complexity

// Time Complexity: O(n)

// Space Complexity: O(1)

// LeetCode 122 - Best Time to Buy and Sell Stock II

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0;

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] > prices[i - 1]) {
                profit += prices[i] - prices[i - 1];
            }
        }

        return profit;
    }
};

