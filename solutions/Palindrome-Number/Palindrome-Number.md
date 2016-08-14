## 题意：
判断一个数是不是回文数

## 要求：
- 负数不是回文数
- 不能将整数转换为字符串，因为题目要求不能增加额外空间
- 反转整数的时候注意越界问题

## 思路：
反转整数，判断反转后的整数时候和原数相同

## 更新：
总结leetcode数学题目

## Description:
Determine whether an integer is a palindrome. Do this without extra space.

click to show spoilers.

Some hints:
Could negative integers be palindromes? (ie, -1)

If you are thinking of converting the integer to string, note the restriction of using extra space.

You could also try reversing an integer. However, if you have solved the problem "Reverse Integer", you know that the reversed integer might overflow. How would you handle such case?

There is a more generic way of solving this problem.

## Idea:
compare half of the digits in x, so don't need to deal with overflow.

