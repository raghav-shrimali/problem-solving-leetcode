// # 121. Best Time to Buy and Sell Stock

// ## Problem Link
// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

// ## Difficulty
// Easy

// ## Topics
// - Arrays
// - Greedy
// - Dynamic Programming

// ## Approach
// 1. Initialize the minimum price as the first day's stock price.
// 2. Traverse the array once.
// 3. Update the minimum price whenever a lower price is found.
// 4. Calculate the profit for selling on the current day.
// 5. Update the maximum profit if the current profit is greater.
// 6. Return the maximum profit after traversing the array.

// ## Algorithm
// - Maintain two variables:
//   - `minPrice` → Lowest price seen so far.
//   - `maxProfit` → Maximum profit obtained so far.
// - For every price:
//   - Update `minPrice`.
//   - Compute `price - minPrice`.
//   - Update `maxProfit`.

// ## Time Complexity
// - **O(n)**

// ## Space Complexity
// - **O(1)**

// ## Example

// ### Input
// ```
// prices = [7,1,5,3,6,4]
// ```

// ### Output
// ```
// 5
// ```

// ### Explanation
// - Buy on day 2 at price = 1.
// - Sell on day 5 at price = 6.
// - Profit = 6 - 1 = 5.

// ## Key Concepts
// - Arrays
// - Greedy Algorithm
// - One Pass Traversal


/*
Question: 121. Best Time to Buy and Sell Stock

Approach:
- Traverse the array once.
- Keep track of the minimum price seen so far.
- Compute the profit at each step.
- Update the maximum profit.

Time Complexity: O(n)
Space Complexity: O(1)
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxProfit = 0;

        for (int price : prices) {
            minPrice = min(minPrice, price);
            maxProfit = max(maxProfit, price - minPrice);
        }

        return maxProfit;
    }
};
// - Running Minimum
