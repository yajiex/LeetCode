## 题意：
给一个有序数组和一个目标元素，如果该目标元素在数组中，就返回下标值；如果不在数组中，就返回合适的插入位置，使数组仍然有序

## 要求：
无

## 思路：
依照题意，sorted array应该是升序数组的意思（否则对于只有一个元素的情况无法判断），那么遍历数组，只要目标元素<=A[i]，就返回i就好;如果遍历完没有找到合适位置，就返回最后一个位置n就好

## 更新：
总结leetcode数组题目

## Description:
Given a sorted array and a target value, return the index if the target is found. If not, return the index where it would be if it were inserted in order.

You may assume no duplicates in the array.

Here are few examples.
[1,3,5,6], 5 → 2
[1,3,5,6], 2 → 1
[1,3,5,6], 7 → 4
[1,3,5,6], 0 → 0

