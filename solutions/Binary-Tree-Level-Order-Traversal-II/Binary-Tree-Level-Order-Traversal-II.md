## 题意：
树的反序按层次遍历

## 要求：
返回每层的结果为一个集合

## 思路：
在正序遍历的基础上reverse一下就好

## 更新：
总结leetcode树的题目

## Description:
Given a binary tree, return the bottom-up level order traversal of its nodes' values. (ie, from left to right, level by level from leaf to root).

For example:
Given binary tree [3,9,20,null,null,15,7],
    3
   / \
  9  20
    /  \
   15   7
return its bottom-up level order traversal as:
[
  [15,7],
  [9,20],
  [3]
]

