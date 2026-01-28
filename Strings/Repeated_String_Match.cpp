/*
LeetCode 686 - Repeated String Match


Approach:
- Repeat string `a` until length >= `b`
- Use KMP pattern matching to check if `b` is a substring
- If not found, repeat once more and check again

Time Complexity: O(n + m)
Space Complexity: O(m)
*/

class Solution {
public:
    void buildLPS(vector<int>& lps, string pat) {
        int len = 0, i = 1;

        while (i < pat.size()) {
            if (pat[i] == pat[len]) {
                lps[i++] = ++len;
            } else {
                if (len != 0)
                    len = lps[len - 1];
                else
                    lps[i++] = 0;
            }
        }
    }

    bool KMP(string text, string pat) {
        vector<int> lps(pat.size(), 0);
        buildLPS(lps, pat);

        int i = 0, j = 0;

        while (i < text.size()) {
            if (text[i] == pat[j]) {
                i++;
                j++;
                if (j == pat.size())
                    return true;
            } else {
                if (j != 0)
                    j = lps[j - 1];
                else
                    i++;
            }
        }
        return false;
    }

    int repeatedStringMatch(string a, string b) {
        string temp = a;
        int count = 1;

        while (temp.size() < b.size()) {
            temp += a;
            count++;
        }

        if (KMP(temp, b))
            return count;

        if (KMP(temp + a, b))
            return count + 1;

        return -1;
    }
};
