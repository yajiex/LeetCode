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

