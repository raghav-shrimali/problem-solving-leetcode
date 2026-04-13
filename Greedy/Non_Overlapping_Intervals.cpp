/*
LeetCode Problem: 435
Title: Non-overlapping Intervals

Approach:
- Sort intervals by end time.
- Greedy selection of non-overlapping intervals.
- Count how many intervals need to be removed.

Time Complexity: O(N log N)
Space Complexity: O(1)
*/

class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(), intervals.end(), 
             [](vector<int>& a, vector<int>& b) {
                 return a[1] < b[1];
             });
        
        int count = 0;
        int prevEnd = intervals[0][1];
        
        for(int i = 1; i < intervals.size(); i++)
        {
            if(intervals[i][0] < prevEnd)
            {
                // Overlapping → remove this interval
                count++;
            }
            else
            {
                // Non-overlapping → update end
                prevEnd = intervals[i][1];
            }
        }
        
        return count;
    }
};
