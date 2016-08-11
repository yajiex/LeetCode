## 题意：
求Pascal’s Triangle的第k行

## 要求：
O(k)空间复杂度

## 思路：
记ans[i]位第任意一行第i个值，那么容易知道扫到某一行时，ans[i]记录的是上一行i位置的值，ans[i]=ans[i]+ans[i-1]，为了不让ans[i-1]先改变，可以从后往前扫

## 更新：
总结leetcode数学题目

## Description:
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?

