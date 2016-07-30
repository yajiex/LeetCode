## 题意：
数组元素代表每天股票的价格，求最大利润（至多买卖一次）

## 要求：
无

## 思路：
即求数组最大元素差（后-前），那么只要遍历一边数组，维护一个最大差，如果当前元素比前面的最小元素还要小，就更新最小元素

## 更新：
总结leetcode数组题目

## Description:
Say you have an array for which the ith element is the price of a given stock on day i.

If you were only permitted to complete at most one transaction (ie, buy one and sell one share of the stock), design an algorithm to find the maximum profit.

Example 1:
Input: [7, 1, 5, 3, 6, 4]
Output: 5

max. difference = 6-1 = 5 (not 7-1 = 6, as selling price needs to be larger than buying price)
Example 2:
Input: [7, 6, 4, 3, 1]
Output: 0

In this case, no transaction is done, i.e. max profit = 0.

