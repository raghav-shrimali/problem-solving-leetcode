/*
LeetCode Problem: 621
Title: Task Scheduler

Approach:
- Count frequencies
- Apply greedy formula

Time Complexity: O(N)
Space Complexity: O(1)
*/

class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        vector<int> freq(26, 0);
        
        for(char t : tasks)
            freq[t - 'A']++;
        
        int maxFreq = *max_element(freq.begin(), freq.end());
        
        int maxCount = 0;
        for(int f : freq)
        {
            if(f == maxFreq)
                maxCount++;
        }
        
        int time = (maxFreq - 1) * (n + 1) + maxCount;
        
        return max((int)tasks.size(), time);
    }
};
