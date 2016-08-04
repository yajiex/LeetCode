## 题意：
给一个数组和一个目标元素，删除所有和目标元素相同的元素，返回删除后的数组长度（数组元素顺序可以改变）

## 要求：
无

## 思路：
遍历数组，每次找到和目标元素相同的元素，就把它和最后一个元素交换，同时数组长度n-1，最后返回n就好

## 更新：
总结leetcode数组题目

## Description:
Given an array and a value, remove all instances of that value in place and return the new length.

Do not allocate extra space for another array, you must do this in place with constant memory.

The order of elements can be changed. It doesn't matter what you leave beyond the new length.

Example:
Given input array nums = [3,2,2,3], val = 3

Your function should return length = 2, with the first two elements of nums being 2.