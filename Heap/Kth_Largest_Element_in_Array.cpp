/*
LeetCode Problem: 215
Title: Kth Largest Element in an Array

Approach:
- Maintain a min heap of size k.
- Keep removing smallest when size exceeds k.
- Top element is kth largest.

Time Complexity: O(N log K)
Space Complexity: O(K)
*/

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int, vector<int>, greater<int>> pq;
        
        for(int num : nums)
        {
            pq.push(num);
            
            if(pq.size() > k)
                pq.pop();
        }
        
        return pq.top();
    }
};
