## 题意：
求给定数组的全排列
## 要求：
无

## 思路：
题目限制了返回类型必须是vector<vector<int> >，这就必须传递引用了
采用了生成全排列的经典算法交换元素的方法

这里需要注意的一点，我用python实现的时候，
if pos==n:
            temp=tempans[:]
            ans.append(temp)
这里如果直接ans.append(tympans)，会导致最后的ans列表中都是空列表项，这是由于Python特殊的参数传递的方式导致的（具体？）
所以这里我将tempans首先复制一下，同样不能单纯的用”=“复制，这样只会增加一个指针，而采用切片的方法

## 更新：
总结leetcode排列组合题目

## Description:
Given a collection of distinct numbers, return all possible permutations.

For example,
[1,2,3] have the following permutations:
[
  [1,2,3],
  [1,3,2],
  [2,1,3],
  [2,3,1],
  [3,1,2],
  [3,2,1]
]

