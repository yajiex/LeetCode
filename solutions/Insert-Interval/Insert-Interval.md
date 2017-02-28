## 题意：
将新区间插入到有序的区间中

## 要求：


## 思路：
如果新区间的end < 当前区间的start，不用找下去了，把新区间插入到当前区间的前面，然后返回。
如果当前区间的end小于新区间的start，继续遍历找下一个区间。
如果当前区间和新区间发生重合，则start取两者最小的start，end取两者最大的end，生成一个新的区间。
继续遍历。

如果遍历一直到末尾也没发生区间重合，就把新区间插入到原来ArrayList的末尾。

## 更新：
总结leetcode动态规划题目

## Description:
Given a set of non-overlapping intervals, insert a new interval into the intervals (merge if necessary).

You may assume that the intervals were initially sorted according to their start times.

Example 1:
Given intervals [1,3],[6,9], insert and merge [2,5] in as [1,5],[6,9].

Example 2:
Given [1,2],[3,5],[6,7],[8,10],[12,16], insert and merge [4,9] in as [1,2],[3,10],[12,16].

This is because the new interval [4,9] overlaps with [3,5],[6,7],[8,10].

