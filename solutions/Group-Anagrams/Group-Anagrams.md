## 题意：
Anagrams是指字符相同只是顺序不同的字符串，给定字符串数组，返回所有的Anagrams串

## 要求：


## 思路：
思路：用map<string, int>记录排序后的字符串以及首次出现的位置。
1. 从strs的第一个元素开始遍历，首先对string进行排序得到tmps；
2. 在map里查找tmps；
3. 若不存在，将tmps以及该元素的下标存入map<string ,int>；
4. 若存在，首先将第一次出现tmps时的原始字符串存入结果solution，即strs[map[tmps]]，并将map[tmps]设置为-1（防止下次再存），再将该字符串本身存入结果solution；
5. 重复以上1-4步，直到遍历结束。

## 更新：
总结leetcode字符串题目

