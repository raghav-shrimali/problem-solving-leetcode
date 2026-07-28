/*
=========================================================
LeetCode 179. Largest Number
=========================================================

Approach:
1. Convert all integers into strings.
2. Sort the strings using a custom comparator:
      a + b > b + a
3. Concatenate the sorted strings.
4. If the first string is "0", return "0".

Time Complexity: O(n log n × k)
Space Complexity: O(n × k)

Topic: Sorting, Greedy, Strings

=========================================================
*/

class Solution {
public:
    static bool cmp(string &a, string &b) {
        return a + b > b + a;
    }

    string largestNumber(vector<int>& nums) {
        vector<string> arr;

        for (int num : nums) {
            arr.push_back(to_string(num));
        }

        sort(arr.begin(), arr.end(), cmp);

        if (arr[0] == "0")
            return "0";

        string ans = "";

        for (string &s : arr) {
            ans += s;
        }

        return ans;
    }
};
