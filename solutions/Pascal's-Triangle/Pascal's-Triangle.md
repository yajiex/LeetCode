## 题意：
求Pascal’s Triangle

## 要求：
无

## 思路：
dp[i][j]=dp[i-1][j]+dp[i-1][j-1]

## 更新：
总结leetcode数学题目

## Description:
Given numRows, generate the first numRows of Pascal's triangle.

For example, given numRows = 5,
Return

[
     [1],
    [1,1],
   [1,2,1],
  [1,3,3,1],
 [1,4,6,4,1]
]

