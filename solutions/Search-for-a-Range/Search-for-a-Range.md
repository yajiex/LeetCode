## 题意：
求有序数组中指定元素的范围

## 要求：
时间复杂度O(logn)

## 思路：
二分，当target==A[m]的时候，判断A[m]与相邻元素的关系，缩小二分范围

## 更新：
总结leetcode数组题目

## Description:
Given an array of integers sorted in ascending order, find the starting and ending position of a given target value.

Your algorithm's runtime complexity must be in the order of O(log n).

If the target is not found in the array, return [-1, -1].

For example,
Given [5, 7, 7, 8, 8, 10] and target value 8,
return [3, 4].

