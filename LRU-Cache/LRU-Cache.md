## 题意：
实现LRU Cache

## 要求：


## 思路：
http://blog.csdn.net/doc_sgl/article/details/15378513
使用map+双向链表，复杂度是O(logN)

链表头部的表示刚刚访问过的，链表尾部的表示很久之前访问的

每次get(key)，先在map中找到这个节点，然后把这个节点放到链表头部。

每次set(key, value)，现在map中找这个节点，如果有的话就把这个节点放到链表头部，如果没有就看看cache空间是否已经满了，size>=capacity，如果未满，就生成一个新的节点放到链表头部，如果满了，就生成一个新的节点放到链表头部并且删除链表尾部的一个节点。

## 更新：
总结leetcode树的题目

