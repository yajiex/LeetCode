## 题意：
给定一组数和一个目标值，找出所有组合使和为T，不可以重复

## 要求：
无

## 思路：
排序，深搜，每次搜的时候判断一下是否和上一个数重复

## 更新：
总结leetcode回溯题目

## Description:
Given a collection of candidate numbers (C) and a target number (T), find all unique combinations in C where the candidate numbers sums to T.

Each number in C may only be used once in the combination.

Note:
All numbers (including target) will be positive integers.
The solution set must not contain duplicate combinations.
For example, given candidate set [10, 1, 2, 7, 6, 1, 5] and target 8, 
A solution set is: 
[
  [1, 7],
  [1, 2, 5],
  [2, 6],
  [1, 1, 6]
]
