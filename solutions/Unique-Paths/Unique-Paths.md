## 题意：
求从(1,1)点到(m,n)点的不同路径数，只能往右或往下走

## 要求：
无

## 思路：
组合数应用，共需要走m+n-2步，其中纵向n-1步，横向m-1步.

## 更新：
总结leetcode动态规划题目

## Description:
A robot is located at the top-left corner of a m x n grid (marked 'Start' in the diagram below).

The robot can only move either down or right at any point in time. The robot is trying to reach the bottom-right corner of the grid (marked 'Finish' in the diagram below).

How many possible unique paths are there?


Above is a 3 x 7 grid. How many possible unique paths are there?

Note: m and n will be at most 100.

## Idea:
https://discuss.leetcode.com/topic/15265/0ms-5-lines-dp-solution-in-c-with-explanations

