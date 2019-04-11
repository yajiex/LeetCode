class Solution {
public:
    int countArrangement(int N) {
        int count = 0;
        std::vector<bool> visited(N);
        std::vector<int> path;
        dfs(N, path, visited, count);
        return count;
    }
    
private:
    void dfs(int N, std::vector<int>& path, std::vector<bool>& visited, int& count)
    {
        if (path.size() == N) // find a valid path
        {
            ++count; // update count
            return; // backtracking
        }
        int l = path.size() + 1; // the position to add value
        for (int i = 1; i <= N; ++i)
        {
            if ((i % l == 0 || l % i == 0) && visited[i] == false)
            {
                visited[i] = true;
                path.push_back(i);
                dfs(N, path, visited, count);
                visited[i] = false; // recover stack
                path.pop_back(); // recover stack
            }
        }
    }
};