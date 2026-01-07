// LeetCode 225: Implement Stack using Queues
// Approach: Single Queue Rotation
// Time: O(n) push, Space: O(n)

class MyStack {
    queue<int> q;

public:
    MyStack() {}

    void push(int x) {
        q.push(x);
        for (int i = 0; i < q.size() - 1; i++) {
            q.push(q.front());
            q.pop();
        }
    }

    int pop() {
        int val = q.front();
        q.pop();
        return val;
    }

    int top() {
        return q.front();
    }

    bool empty() {
        return q.empty();
    }
};
