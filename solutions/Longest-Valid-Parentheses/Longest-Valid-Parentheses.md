## 题意：
求一组括号中的最长括号匹配长度

## 要求：
无

## 思路：
记dp[i]为以i结尾的最长括号匹配长度，那么当j<i且s[j]==‘(“时，dp[i]=dp[j-1]+i-j+1
从左向右遍历
- s[i]=‘(‘，压栈
- s[i]=‘)‘，弹栈，更新dp[i]
维护一个最大值ans就好

## 更新：
总结leetcode堆栈题目

## Description:
Given a string containing just the characters '(' and ')', find the length of the longest valid (well-formed) parentheses substring.

For "(()", the longest valid parentheses substring is "()", which has length = 2.

Another example is ")()())", where the longest valid parentheses substring is "()()", which has length = 4.

## Idea:
https://leetcodenotes.wordpress.com/2013/10/19/leetcode-longest-valid-parentheses-%E8%BF%99%E7%A7%8D%E6%8B%AC%E5%8F%B7%E7%BB%84%E5%90%88%EF%BC%8C%E6%9C%80%E9%95%BF%E7%9A%84valid%E6%8B%AC%E5%8F%B7%E7%BB%84%E5%90%88%E6%9C%89%E5%A4%9A/