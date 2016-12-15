## 题意：
求数组中的满足和为target的两个元素的下标

## 要求：
O(n)空间复杂度

## 思路：
O(n^2)会T，考虑将组排序后移动head和tail指针来做，要记录每个元素的下标有些麻烦
这里用map来做

## 更新：
总结leetcode数组题目

## Description:
Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
UPDATE (2016/2/13):
The return format had been changed to zero-based indices. Please read the above updated description carefully.

## Idea:
Use Map to save mapping relation.

