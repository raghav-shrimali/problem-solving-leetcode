/*
===============================================================================
LeetCode Problem: 1464. Maximum Product of Two Elements in an Array
Difficulty: Easy

Topic:
- Arrays
- Sorting

Approach:
1. Sort the given array in ascending order.
2. The two largest elements will be at the end of the sorted array.
3. Compute the maximum product using:
      (largest - 1) * (secondLargest - 1)
4. Return the computed product.

Time Complexity: O(n log n)
- Sorting the array takes O(n log n).

Space Complexity: O(1)
- No extra space is used apart from the sorting algorithm.
===============================================================================
*/

// class Solution {
// public:
//     int maxProduct(vector<int>& nums) {

//         sort(nums.begin(), nums.end());

//         int n = nums.size();

//         return (nums[n - 1] - 1) * (nums[n - 2] - 1);
//     }
// };


// We have another approach to solve these question

/*
===============================================================================
LeetCode Problem: 1464. Maximum Product of Two Elements in an Array
Difficulty: Easy

Topic:
- Arrays

Approach:
1. Traverse the array once to find the largest and second largest elements.
2. Update the largest and second largest values while iterating.
3. Return:
      (largest - 1) * (secondLargest - 1)

Time Complexity: O(n)
- Single traversal of the array.

Space Complexity: O(1)
- Only two variables are used.
===============================================================================
*/

class Solution {
public:
    int maxProduct(vector<int>& nums) {

        int largest = 0;
        int secondLargest = 0;

        for (int num : nums) {

            if (num > largest) {
                secondLargest = largest;
                largest = num;
            }
            else if (num > secondLargest) {
                secondLargest = num;
            }
        }

        return (largest - 1) * (secondLargest - 1);
    }
};
