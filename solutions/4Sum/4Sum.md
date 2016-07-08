## 题意：
给一个n个元素的数组，求满足四个元素和为0的序列

## 要求：


## 思路：
同3Sum，O(n^3)
python的解法参照网上的hash的方法
先排序
然后建立一个dictionary，dic[temp]=[(i,j)满足num[i]+num[j]=temp],O(n^2)
然后搜索是否含有target-num[i]-num[j]
最终结果保存到一个set()中，用于去重

## 更新：
总结leetcode数组题目

