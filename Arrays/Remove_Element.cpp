// # LeetCode 27 - Remove Element

// ## Problem Details
// - **Platform:** LeetCode
// - **Problem Number:** 27
// - **Difficulty:** Easy

// ## Topics
// - Array
// - Two Pointers

// ## Approaches

// ### 1. Brute Force
// - Create a new array and copy all elements except the given value.
// - **Time Complexity:** O(n)
// - **Space Complexity:** O(n)

// ### 2. Optimal Approach (Two Pointers)
// - Use one pointer (`ptr`) to track the position where the next valid element should be placed.
// - Traverse the array once.
// - If the current element is not equal to `val`, place it at index `ptr` and increment `ptr`.
// - Return `ptr`, which represents the new length of the modified array.
// - **Time Complexity:** O(n)
// - **Space Complexity:** O(1)


class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr = 0;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] != val){
                nums[ptr] = nums[i];
                ptr++;
            }
        }
        return ptr;
    }
};

