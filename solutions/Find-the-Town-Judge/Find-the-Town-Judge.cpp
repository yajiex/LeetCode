// class Solution {
// public:
//     int findJudge(int N, vector<vector<int>>& trust) {
//         if (trust.size() < N - 1)
//         return -1;

//     vector<int> a(N + 1, 0), b(N + 1, 0);

//     for (vector<int> t: trust) {
//         a[t[0]] ++;
//         b[t[1]] ++;
//     }

//     int ans = -1;

//     for (int i = 1; i <= N; i++) {
//         if (ans == -1 && a[i] == 0 && b[i] == N - 1)
//             ans = i;
//     }

//     return ans;
//     }
// };

// 2020-05-11
// Consider trust as a graph, all pairs are directed edge.
// The point with in-degree - out-degree = N - 1 become the judge.
class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        vector<int> count(N + 1, 0);
        for (auto& t : trust)
            count[t[0]]--, count[t[1]]++;
        for (int i = 1; i <= N; ++i) {
            if (count[i] == N - 1) return i;
        }
        return -1;
    }
};