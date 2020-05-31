class Solution {
public:
    int minReorder(int n, vector<vector<int>>& connections) {
        vector<vector<int>> adj(n);
        for(int i=0;i<connections.size();i++) {
            int s = connections[i][0];
            int d = connections[i][1];
            adj[s].push_back(d);
        }
        
        vector<int> visit = vector<int>(n, false);
        int ans = 0;
        for(int i=0;i<n;i++) {
            if(visit[i]) {
               continue; 
            }
            visit[i] = true;
            queue<int> q;
            q.push(i);
            while(!q.empty()) {
                int cur = q.front();
                q.pop();
                for(int i=0;i<adj[cur].size();i++) {
                    int tmp = adj[cur][i];
                    if(!visit[tmp]) {
                        q.push(tmp);
                        ans++;
                        visit[tmp] = true;
                    }
                }
            }
        }
        return ans;
    }
};