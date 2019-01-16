class Solution {
public:
    int fourSumCount(vector<int>& A, vector<int>& B, vector<int>& C, vector<int>& D) {
        unordered_map<int, int> mp;
        for(const int& a : A)
        {
            for(const int& b : B)
            {
                mp[a + b]++;
            }
        }
            
        int ans = 0;
        for(const int& c : C)
        {
            for(const int& d : D)
            {
                int s = c + d;
                if (mp.count(-s))
                {
                    ans += mp[-s];
                }
            }
        }              
        return ans;
    }
};