## 题意：
将有序链表转换成二叉搜索树

## 要求：


## 思路：
Discuss里看到这个时间为O(n)，空间为O(1)的算法
采用深搜的思想，先把左子树转换完，然后根节点确定，再搜右子树
因为要改变链表，所以传参的时候用了*&,来传递对一个指针的引用

## 更新
总结leetcode链表题目
