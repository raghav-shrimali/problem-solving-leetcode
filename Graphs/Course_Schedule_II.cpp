// LeetCode 210: Course Schedule II
// Approach: BFS (Topological Sort - Kahn's Algorithm)
// Time Complexity: O(V + E)
// Space Complexity: O(V + E)


class Solution {
public:
vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
vector<vector<int>> adj(numCourses);
vector<int> indegree(numCourses, 0);


// Build graph
for (auto &p : prerequisites) {
adj[p[1]].push_back(p[0]);
indegree[p[0]]++;
}
queue<int> q;
// Push all courses with indegree 0
for (int i = 0; i < numCourses; i++) {
if (indegree[i] == 0)
q.push(i);
}


vector<int> order;
// BFS
while (!q.empty()) {
int course = q.front();
q.pop();
order.push_back(course);


for (int next : adj[course]) {
if (--indegree[next] == 0)
q.push(next);
}
}


// If cycle exists, return empty
if (order.size() != numCourses)
return {};


return order;
}
};
