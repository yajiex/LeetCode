## 题意：
实现pow(x,n)

## 要求：


## 思路：
这里采用的快速幂的方法，要注意的是n的数据范围
当n==INT_MIN的时候，如果单纯的将pow(x,n)转换为1/pow(x,-n),-n的数据范围会溢出，而-INT_MIN!=INT_MAX，所以这里需要做一些特殊的转换

## 更新：
总结leetcode数学题目

## Description:
Implement pow(x, n).

