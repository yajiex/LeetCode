## 题意：
数组中每个元素代表所能跳的最大距离，问从0出发到达终点最少需要几跳

## 要求：


## 思路：
O(n^2)的dp会TLE
每次记录最远能够到达的范围，每次都在此范围内搜，找到下一跳的最远范围，更新最远范围和跳数

## 更新：
总结leetcode动态规划题目

## Description:
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Your goal is to reach the last index in the minimum number of jumps.

For example:
Given array A = [2,3,1,1,4]

The minimum number of jumps to reach the last index is 2. (Jump 1 step from index 0 to 1, then 3 steps to the last index.)

Note:
You can assume that you can always reach the last index.

