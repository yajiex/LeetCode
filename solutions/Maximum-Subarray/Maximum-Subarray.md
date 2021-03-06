## 题意：
求数组的最大连续子数组（至少含有一个元素）

## 要求：
找到O(n)算法之后，再写一个分治算法

## 思路：
记dp[i]位以i结尾的前i个数的最大子数组，那么对于dp[i]
- 如果dp[i-1]+A[i]>A[i],即dp[i-1]>0，显然dp[i]=dp[i-1]+A[i]
- 如果dp[i-1]+A[i]<A[i],即dp[i-1]<0，显然dp[i]=A[i]
对于dp[i-1]=0的情况放在哪里都可以
同时由于dp[i]只和dp[i-1]有关系，所以不需要开一个数组，而只用一个temp来记录即可
扫一遍数组，ans=max{dp[i]}
对于分治思想，还没有想出来，以后再补充

## 更新：
总结leetcode动态规划题目

## Description:
Find the contiguous subarray within an array (containing at least one number) which has the largest sum.

For example, given the array [-2,1,-3,4,-1,2,1,-5,4],
the contiguous subarray [4,-1,2,1] has the largest sum = 6.

click to show more practice.

More practice:
If you have figured out the O(n) solution, try coding another solution using the divide and conquer approach, which is more subtle.

