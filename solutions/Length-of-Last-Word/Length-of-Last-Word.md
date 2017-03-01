## 题意：
求字符串中最后一个单词的长度

## 要求：

## 思路：
从后向前遍历字符串，记录第一个非空格的位置和之后的第一个空格的位置，作差就是最后一个单词的长度。注意各种特殊情况的判断

## 更新：
总结leetcode字符串题目

## Description:
Given a string s consists of upper/lower-case alphabets and empty space characters ' ', return the length of last word in the string.

If the last word does not exist, return 0.

Note: A word is defined as a character sequence consists of non-space characters only.

For example, 
Given s = "Hello World",
return 5.

