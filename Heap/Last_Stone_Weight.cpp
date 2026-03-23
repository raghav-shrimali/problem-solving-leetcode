/*
LeetCode Problem: 1046
Title: Last Stone Weight

Approach:
- Use max heap to always pick largest stones.
- Smash two stones and push difference.

Time Complexity: O(N log N)
Space Complexity: O(N)
*/

class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq;
        
        for(int stone : stones)
            pq.push(stone);
        
        while(pq.size() > 1)
        {
            int a = pq.top(); pq.pop();
            int b = pq.top(); pq.pop();
            
            if(a != b)
                pq.push(a - b);
        }
        
        return pq.empty() ? 0 : pq.top();
    }
};
