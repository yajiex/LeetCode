## 题意：
另一种形式的正则匹配

## 要求：


## 思路：
http://www.cnblogs.com/x1957/p/3517096.html

我们来匹配s和p

如果匹配就s++ , p++

如果不匹配的话就看p之前知否有*

当然是否有*我们需要记录的,遇到*就记录当前*的位置和匹配到的s的位置

然后从*的下一位置匹配,开始匹配0个字符

如果ok往后走,往后不ok,那么匹配1个字符...同理2,3,4个字符(有点回溯的感觉吧

所以时间复杂度是O(len(s) * len(p))


python做法：
http://chaoren.is-programmer.com/posts/42771.html

遇到'*'时, 用star变量记录'*'在p中出现的位置, 用ss变量记录此时s字符串指针sPointer的位置, 但不移动sPointer, 因为'*'可以匹配0个字符, ss表示这个'*'所能匹配到的位置。遇到不匹配的情况时, 即走到if star!= -1时, pPointer被拉回到star的下一个位置, sPointer被拉回到ss的下一个位置, 继续匹配。把s字符串走完, p中还可以剩下一堆'*', 如果p中还有其他字符就返回False了。

## 更新：
总结leetcode搜索题目

## Description:
Implement wildcard pattern matching with support for '?' and '*'.

'?' Matches any single character.
'*' Matches any sequence of characters (including the empty sequence).

The matching should cover the entire input string (not partial).

The function prototype should be:
bool isMatch(const char *s, const char *p)

Some examples:
isMatch("aa","a") → false
isMatch("aa","aa") → true
isMatch("aaa","aa") → false
isMatch("aa", "*") → true
isMatch("aa", "a*") → true
isMatch("ab", "?*") → true
isMatch("aab", "c*a*b") → false

