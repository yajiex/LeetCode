## 题意：
交换链表中每两个邻接节点

## 要求：
不能只交换值，需要真正交换节点
只能使用连续存储空间

## 思路：
对于1->2->3->4的情况
假设现在要交换3和4
那么让s指向2,p指向3,q指向4
那么
p->next=q->next
q->next=p
s->next=q
即可
注意头两个节点的特殊情况

## 更新
总结leetcode链表题目

## Description:
Given a linked list, swap every two adjacent nodes and return its head.

For example,
Given 1->2->3->4, you should return the list as 2->1->4->3.

Your algorithm should use only constant space. You may not modify the values in the list, only nodes itself can be changed.

## Idea:
Recursively (O(n) space) or Iterative (O(1) space)