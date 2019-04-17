class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        if (trust.size() < N - 1)
        return -1;

    vector<int> a(N + 1, 0), b(N + 1, 0);

    for (vector<int> t: trust) {
        a[t[0]] ++;
        b[t[1]] ++;
    }

    int ans = -1;

    for (int i = 1; i <= N; i++) {
        if (ans == -1 && a[i] == 0 && b[i] == N - 1)
            ans = i;
    }

    return ans;
    }
};