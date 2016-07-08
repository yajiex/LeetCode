## 题意：
求两个单词的编辑距离

## 要求：


## 思路：
dp[i][j]表示word1的前i个字母和word2的前j个字母的距离，则dp[i][j]=min(dp[i][j-1]+1,dp[i-1][j]+1,dp[i-1][j-1](if word1[i]==word2[j])

## 更新:
总结leetcode动态规划题目

