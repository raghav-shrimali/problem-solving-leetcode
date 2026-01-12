// LeetCode 994: Rotting Oranges
// Approach: Multi-Source BFS
// Time: O(n * m), Space: O(n * m)


class Solution {
public:
int orangesRotting(vector<vector<int>>& grid) {
int n = grid.size(), m = grid[0].size();
queue<pair<int,int>> q;
int fresh = 0, time = 0;


for (int i = 0; i < n; i++) {
for (int j = 0; j < m; j++) {
if (grid[i][j] == 2) q.push({i, j});
if (grid[i][j] == 1) fresh++;
}
}


vector<int> dir = {0, 1, 0, -1, 0};


while (!q.empty() && fresh > 0) {
int sz = q.size();
time++;
while (sz--) {
auto [r, c] = q.front(); q.pop();
for (int i = 0; i < 4; i++) {
int nr = r + dir[i], nc = c + dir[i + 1];
if (nr >= 0 && nc >= 0 && nr < n && nc < m && grid[nr][nc] == 1) {
grid[nr][nc] = 2;
fresh--;
q.push({nr, nc});
}
}
}
}
return fresh == 0 ? time : -1;
