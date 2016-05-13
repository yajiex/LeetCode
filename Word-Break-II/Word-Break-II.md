## 题意：
在Word Break的基础上输出单词组合

## 要求：


## 思路：
 先递推，dp[i] == true 表示 s 中前 i 个字符的串是符合要求的，枚举位置 i ，对于 i 枚举位置 j < i，如果 dp[j] == true且 j ~ i的串在字典中，则dp[i] = true。

同时对于这样的 j, i，record[i].push_back(j)，即在 i 位置的可行迭代表中增加位置 j。

完成site之后，从尾部倒着DFS过去就得到了所有串。

## 更新：
总结leetcode动态规划题目

