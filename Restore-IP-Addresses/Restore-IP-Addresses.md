## 题意：
将一个字符串转换成所有可能的IP地址形式

## 要求：
无

## 思路：
深搜，注意剪枝
这里C++方法参照了《手写代码必备手册》
python方法参照了http://chaoren.is-programmer.com/posts/42718.html
递归方法，str(int(s)) == s是为了去掉前导0，即Input＝"010010"时, Output不能是"0.1.0.010"之类的。

## 更新：
总结leetcode回溯题目

