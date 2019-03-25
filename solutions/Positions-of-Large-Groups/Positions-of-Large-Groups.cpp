class Solution {
public:
    vector<vector<int>> largeGroupPositions(string S) {
        int i = 0, j = 0, N = S.size();
        vector<vector<int>> res;
        while (j < N) {
            while (j < N && S[j] == S[i]) ++j;
            if (j - i >= 3)
                res.push_back({i, j - 1});
            i = j;
        }
        return res;
    }
};