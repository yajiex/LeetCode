## 题意：
在单链表中，每K个一组，反转链表

## 要求：
只能使用连续空间

## 思路：
每K个调用一次反转链表子函数

## 更新：
真正弄明白了链表逆置

## Description:
Given a linked list, reverse the nodes of a linked list k at a time and return its modified list.

k is a positive integer and is less than or equal to the length of the linked list. If the number of nodes is not a multiple of k then left-out nodes in the end should remain as it is.

You may not alter the values in the nodes, only nodes itself may be changed.

Only constant memory is allowed.

For example,
Given this linked list: 1->2->3->4->5

For k = 2, you should return: 2->1->4->3->5

For k = 3, you should return: 3->2->1->4->5

