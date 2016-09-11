## 题意：
数组表示每天股票的价格，设计算法求最大利润。可以进行多次股票交易，但在买入新股票之前必须将旧股票卖出

## 要求：
无

## 思路：
考虑a[i],a[i+1],a[i+2]，如果a[i+2]>a[i+1]>a[i]，那么下面两种情况：
- i天买入，i+1天不卖，i+2天卖出，利润a[i+2]-a[i]
- i天买入，i+1天卖出，同时i+1天买入，i+2天卖出，利润a[i+1]-a[i]+a[i+2]-a[i+1]=a[i+2]-a[i]
两只情况实际是一致的。
所以每当递增序列出现时，就累加到利润上就好

## 更新：
总结leetcode数组题目

## Description:
Say you have an array for which the ith element is the price of a given stock on day i.

Design an algorithm to find the maximum profit. You may complete as many transactions as you like (ie, buy one and sell one share of the stock multiple times). However, you may not engage in multiple transactions at the same time (ie, you must sell the stock before you buy again).
