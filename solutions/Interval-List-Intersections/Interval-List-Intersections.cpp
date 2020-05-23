class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> res;
        for (auto i = 0, j = 0; i < A.size() && j < B.size(); A[i][1] < B[j][1] ? ++i : ++j) {
            auto start = max(A[i][0], B[j][0]);
            auto end = min(A[i][1], B[j][1]);
            if (start <= end) 
                res.push_back({start, end});
        }
        return res;
    }
};