## 题意：
数组中每个元素代表能够跳跃的最大格数，从A[0]出发，问能否到达最后一点

## 要求：


## 思路：
遍历，每个点更新能够到达的最远距离，如果到达某点时最远距离已经小于该点的距离，那么一定无法到达最远距离

## 更新：
总结leetcode动态规划题目

## Description:
Given an array of non-negative integers, you are initially positioned at the first index of the array.

Each element in the array represents your maximum jump length at that position.

Determine if you are able to reach the last index.

For example:
A = [2,3,1,1,4], return true.

A = [3,2,1,0,4], return false.

