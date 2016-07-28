## 题意：
爬楼梯需要n步，每次可以爬1步或者2两步，求爬楼梯不同的方法数

## 要求：
无

## 思路：
显然递归，但是会RE，于是用dp来做，dp[i]表示爬i层的方法数,显然dp[1]=1,dp[2]=2,对于dp[i]，爬i层
- 一方面可以通过爬i-1层然后再爬1层，
- 或者通过爬i-2层再选择爬2层或者爬两个1层，但爬两个1层实际上就是dp[i-1]
所以dp[i]=dp[i-1]+dp[i-2]

## 更新：
总结leetcode动态规划题目

## Description:

You are climbing a stair case. It takes n steps to reach to the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top?

## Idea:
Fibonacci: TLE
DP: O(n)
Matrix Power: O(logn)
