## 题意：
满足全部包含L中单词且中间无其他干扰项，返回这样的条件的开头和结尾索引

## 要求：


## 思路：
http://www.cnblogs.com/awy-blog/p/3821586.html
这道题意思是说满足全部包含L中单词且中间无其他干扰项，返回这样的条件的开头和结尾索引。这道题主要使用map数据结构来解题，主要是使用map来记录L中单词出现的次数。循环遍历字符串，找出存在与L中的字符串且L中单词必须连续、全部出现。查找某个单词成功后将这个单词加入到新的map容器中，这个容器存储的是从当前指针位置开始满足单词列表的单词，同时统计次数，接下来如果这个但是在新容器出现的次数是否小于等初始化容器的次数。如果大于，则是错误的，指针后移。然后在找出其他L中的单词。(注意L中单词必须连续出现)最后我们后移单词列表中指定个数的单词或者因为不匹配而终止从指针位置i开始，如果查找成功就把当前指针的位置记录下来。如此找出所有满足条件的情况。

## 更新：
总结leetcode字符串题目

## Description:
You are given a string, s, and a list of words, words, that are all of the same length. Find all starting indices of substring(s) in s that is a concatenation of each word in words exactly once and without any intervening characters.

For example, given:
s: "barfoothefoobarman"
words: ["foo", "bar"]

You should return the indices: [0,9].
(order does not matter)

## Idea:
https://leetcode.com/problems/substring-with-concatenation-of-all-words/

I think the following code is self-explanatory enough. We use an unordered_map<string, int> counts to record the expected times of each word and another unordered_map<string, int> seen to record the times we have seen. Then we check for every possible position of i. Once we meet an unexpected word or the times of some word is larger than its expected times, we stop the check. If we finish the check successfully, push i to the result indexes.

    class Solution {
    public:
        vector<int> findSubstring(string s, vector<string>& words) {
            unordered_map<string, int> counts;
            for (string word : words)
                counts[word]++;
            int n = s.length(), num = words.size(), len = words[0].length();
            vector<int> indexes;
            for (int i = 0; i < n - num * len + 1; i++) {
                unordered_map<string, int> seen;
                int j = 0;
                for (; j < num; j++) {
                    string word = s.substr(i + j * len, len);
                    if (counts.find(word) != counts.end()) {
                        seen[word]++;
                        if (seen[word] > counts[word])
                            break;
                    } 
                    else break;
                }
                if (j == num) indexes.push_back(i);
            }
            return indexes;
        }
    };