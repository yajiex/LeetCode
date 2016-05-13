## 题意：
模拟正则匹配

## 要求：


## 思路：
递归：
http://blog.csdn.net/pickless/article/details/9043389
对于S[i]和P[j]：
如果P[j+1]!='*'，S[i] == P[j]=>匹配下一位(i+1, j+1)，S[i]!=P[j]=>匹配失败；
如果P[j+1]=='*'，S[i]==P[j]=>匹配下一位(i+1, j+2)或者(i, j+2)，S[i]!=P[j]=>匹配下一位(i,j+2)。
匹配成功的条件为S[i]=='\0' && P[j]=='\0'。

动态规划：
http://blog.sina.com.cn/s/blog_45b813200101bmyw.html
http://blog.csdn.net/linhuanmars/article/details/21145563

## 更新：
总结leetcode搜索题目

