// 💡 Approach

// If n is a multiple of 4, you will lose with optimal play.

// Otherwise, you can always force a win.

// 🔍 Reason

// Every move removes 1–3 stones.
// If you always leave your opponent with a multiple of 4, you control the game.

// ⏱ Time & Space Complexity

// Time Complexity: O(1)

// Space Complexity: O(1)



// LeetCode 292 - Nim Game
// Topic: Game Theory

class Solution {
public:
    bool canWinNim(int n) {
      

        return n % 4 != 0;
    }
};


