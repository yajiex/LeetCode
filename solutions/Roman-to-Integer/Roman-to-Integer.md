## 题意：
将一个罗马数字转换成整数，整数范围1-3999

## 要求：
无

## 思路：
这里我用map实现，建立罗马数字(char)与整数(int)的对应关系，遍历字符串，同时记录上一个字符，如果当前字符对应的整数大于上一个字符，那么就减去上一个字符对应的整数，否则加上

## 更新：
总结leetcode数学题目

## Description:
Given a roman numeral, convert it to an integer.

Input is guaranteed to be within the range from 1 to 3999.

## Idea:

If you forget a break then script will run from the case where criteria is met, and will run the case after that regardless if criteria was met.

