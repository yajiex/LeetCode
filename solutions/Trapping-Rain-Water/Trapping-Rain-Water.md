## 题意：
n个整数代表n个阶梯的高度，求下雨后的积水量

## 要求：

## 思路：
先遍历一遍找到最高点
正反遍历一边，同时维护两边的次高点，对于低于次高点的点，可以存它们之间差的水量；如果高于次高点，那么更新次高点

## 更新：
总结leetcode堆栈题目

## Description:
Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.

For example, 
Given [0,1,0,2,1,0,1,3,2,1,2,1], return 6.


The above elevation map is represented by array [0,1,0,2,1,0,1,3,2,1,2,1]. In this case, 6 units of rain water (blue section) are being trapped. Thanks Marcos for contributing this image!

## Idea:
https://discuss.leetcode.com/topic/5125/sharing-my-simple-c-code-o-n-time-o-1-space

instead of calculating area by height*width, we can think it in a cumulative way. In other words, sum water amount of each bin(width=1).
Search from left to right and maintain a max height of left and right separately, which is like a one-side wall of partial container. Fix the higher one and flow water from the lower part. For example, if current height of left is lower, we fill water in the left bin. Until left meets right, we filled the whole container.

