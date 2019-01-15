class Solution {
public:
    int countPrimes(int n) {
        vector<bool> prime(n, false);
        int ans = 0;
        for(int i=2;i<n;i++)
        {
            if(!prime[i])
            {
                ans++;
                for(int j=2;i*j<n;j++)
                {
                    prime[i*j]=true;
                }
            }
        }
        return ans;
    }
};