class Solution {
public:
    // BFS to explore all nodes in the current connected component
    void bfs(int node, vector<vector<int>>& adj, vector<int>& vis) {
        queue<int> q;
        q.push(node);
        vis[node] = 1;

        while (!q.empty()) {
            int current = q.front();
            q.pop();

            for (auto neighbor : adj[current]) {
                if (!vis[neighbor]) {
                    vis[neighbor] = 1;
                    q.push(neighbor);
                }
            }
        }
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int n = isConnected.size();
        vector<vector<int>> adj(n);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (isConnected[i][j] == 1) {
                    adj[i].push_back(j);
                    adj[j].push_back(i); 
                }
            }
        }

        int count = 0;
        vector<int> vis(n, 0);

        for (int i = 0; i < n; i++) {
            if (!vis[i]) {
                bfs(i, adj, vis);  
                count++;  
            }
        }

        return count;
    }
};