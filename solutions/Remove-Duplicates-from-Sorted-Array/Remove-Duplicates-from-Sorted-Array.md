## 题意：
在一个有序数组中删除重复的数

## 要求：
原地删除

## 思路：
由于是有序的，所以遍历数组，判断当前元素A[i]与last
- A[i]==last,跳过
- A[i]!=last,用last更新A[pos],同时Pos++，更新last

## 更新：
总结leetcode数组题目

## Description:
Given a sorted array, remove the duplicates in place such that each element appear only once and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

For example,
Given input array nums = [1,1,2],

Your function should return length = 2, with the first two elements of nums being 1 and 2 respectively. It doesn't matter what you leave beyond the new length.

