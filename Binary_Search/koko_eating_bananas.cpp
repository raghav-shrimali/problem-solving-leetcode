/*
--------------------------------------------------
Question Number: 875
Question Name  : Koko Eating Bananas
Platform       : LeetCode
Difficulty     : Medium
Topic          : Binary Search
--------------------------------------------------
*/

/*
Approach:
---------
- Koko can choose an eating speed `k` (bananas/hour).
- If she eats at speed `k`, time required for a pile is:
      ceil(pile / k)
- We need the MINIMUM `k` such that total hours <= h.

Binary Search on Answer:
------------------------
- Minimum speed = 1
- Maximum speed = max element in piles
- For each mid speed:
    - Calculate total hours needed
    - If hours <= h → try smaller speed
    - Else → increase speed

--------------------------------------------------
Time Complexity:
----------------
O(n * log(maxPile))

Space Complexity:
-----------------
O(1)
--------------------------------------------------
*/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Helper function to check if Koko can eat all bananas
    // at speed 'k' within 'h' hours
    bool canEatAll(vector<int>& piles, int h, int k) {
        long long hours = 0;

        for (int bananas : piles) {
            // ceil(bananas / k)
            hours += (bananas + k - 1) / k;
        }

        return hours <= h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1;
        int high = *max_element(piles.begin(), piles.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (canEatAll(piles, h, mid)) {
                answer = mid;       // possible answer
                high = mid - 1;     // try smaller speed
            } else {
                low = mid + 1;      // increase speed
            }
        }

        return answer;
    }
};
