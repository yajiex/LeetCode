## 题意：
给定一个string和一个单词集合，判断string是否可以恰巧被分割成单词

## 要求：


## 思路：
dp[i]  表示源串的前i个字符可以满足分割，那么 dp[ j ] 满足分割的条件是存在k 使得 dp [k] && substr[k,j]在字典里。

## 更新：
总结leetcode动态规划题目
