/*
LeetCode 1823 - Find the Winner of the Circular Game

Problem:
There are n friends sitting in a circle.
Every k-th friend is eliminated until only one remains.
Return the winner.

Approach:
- Use simulation with a queue.
- Rotate the queue (k-1) times and remove the front element.
- Repeat until one element remains.

Time Complexity: O(n * k)
Space Complexity: O(n)
*/

class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> q;
        for (int i = 1; i <= n; i++)
            q.push(i);

        while (q.size() > 1) {
            for (int i = 1; i < k; i++) {
                q.push(q.front());
                q.pop();
            }
            q.pop(); // eliminate
        }
        return q.front();
    }
};
