## 题意：
求(0,0)点到(n,m)点的路径数，可能有不可走的地方，只能向右向下走

## 要求：
无

## 思路：
基本的dp，如果当前格子不可走,dp[i][j]=0，否则dp[i][j]=dp[i-1][j]+dp[i][j-1]

## 更新：
总结leetcode动态规划题目

## Description:
Follow up for "Unique Paths":

Now consider if some obstacles are added to the grids. How many unique paths would there be?

An obstacle and empty space is marked as 1 and 0 respectively in the grid.

For example,
There is one obstacle in the middle of a 3x3 grid as illustrated below.

[
  [0,0,0],
  [0,1,0],
  [0,0,0]
]
The total number of unique paths is 2.

Note: m and n will be at most 100.
