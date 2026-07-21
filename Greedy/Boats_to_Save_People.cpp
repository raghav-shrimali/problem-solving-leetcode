/*
    LeetCode 881. Boats to Save People

    Difficulty: Medium

    Approach:
    1. Sort the weights in non-decreasing order.
    2. Use two pointers:
       - left  -> lightest person
       - right -> heaviest person
    3. If the lightest and heaviest person can share a boat
       (people[left] + people[right] <= limit),
       move both pointers.
    4. Otherwise, the heaviest person goes alone,
       so only decrement the right pointer.
    5. Every iteration uses exactly one boat.

    Time Complexity: O(n log n)
        - Sorting takes O(n log n)
        - Two-pointer traversal takes O(n)

    Space Complexity: O(1)
        - No extra space is used (excluding sorting space).
*/

class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {

        // Sort the array in ascending order
        sort(people.begin(), people.end());

        int left = 0;
        int right = people.size() - 1;
        int boats = 0;

        // Continue until all people are assigned to boats
        while (left <= right) {

            // If the lightest and heaviest person can share a boat
            if (people[left] + people[right] <= limit) {
                left++;
            }

            // The heaviest person always boards a boat
            right--;

            // One boat is used
            boats++;
        }

        return boats;
    }
};
