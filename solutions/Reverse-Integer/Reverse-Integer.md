## 题意：
反转整数

## 要求：
注意负数情况，注意原数末尾位0的情况

## 思路：
考虑到上述两点就比较简单了，利用除法和取余一位一位的取好了
但题目中还有这样一些信息，如果反转后的整数溢出了怎么办？我想这里如果超过了最大范围那么应该是需要提前定义一个标记变量，在原来的数字有溢出危险时就报错；或者用字符串来处理；

## 更新：
总结leetcode数学题目

## Description:
Reverse digits of an integer.

Example1: x = 123, return 321
Example2: x = -123, return -321

click to show spoilers.

Have you thought about this?
Here are some good questions to ask before coding. Bonus points for you if you have already thought through this!

If the integer's last digit is 0, what should the output be? ie, cases such as 10, 100.

Did you notice that the reversed integer might overflow? Assume the input is a 32-bit integer, then the reverse of 1000000003 overflows. How should you handle such cases?

For the purpose of this problem, assume that your function returns 0 when the reversed integer overflows.

Update (2014-11-10):
Test cases had been added to test the overflow behavior.

