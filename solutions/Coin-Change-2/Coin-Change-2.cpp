// https://leetcode.com/problems/coin-change-2/discuss/99212/Knapsack-problem-Java-solution-with-thinking-process-O(nm)-Time-and-O(m)-Space
class Solution {
public:
    int change(int amount, vector<int>& coins) {
        vector<int> dp = vector<int>(amount+1);
        dp[0] = 1;
        for(auto coin: coins) {
            for(int i=coin;i<=amount;i++) {
                dp[i] += dp[i-coin];
            }
        }
        return dp[amount];
    }
};