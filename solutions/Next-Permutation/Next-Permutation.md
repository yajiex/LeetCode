## 题意：
求一个排列

## 要求：
无

## 思路：
求下一个排列的算法如下：
示例6	8	7	4	3	2
- 从右向左，找到第一个破坏递增趋势的数，例如例子中的6，记录它的下标0
- 从右向左，找到第一个比6大的数，例如例子中的7，记录它的下标2
- 交换下标0和2的值，即swap(num[0],num[2])，序列变成7	8	6	4	3	2
- 反转7右边的所有数，即reverse(num.begin()+1,num.end())，得到7	2	3	4	6	8

## 更新：
总结leetcode排列组合题目

## Description:
Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such arrangement is not possible, it must rearrange it as the lowest possible order (ie, sorted in ascending order).

The replacement must be in-place, do not allocate extra memory.

Here are some examples. Inputs are in the left-hand column and its corresponding outputs are in the right-hand column.
1,2,3 → 1,3,2
3,2,1 → 1,2,3
1,1,5 → 1,5,1

