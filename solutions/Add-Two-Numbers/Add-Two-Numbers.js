/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */
var addTwoNumbers = function (l1, l2) {
  const preHead = new ListNode(0);
  let p = preHead;
  let flag = 0;
  while (l1 || l2 || flag) {
    const sum = (l1 ? l1.val : 0) + (l2 ? l2.val : 0) + flag;
    flag = Math.floor(sum / 10);
    p.next = new ListNode(sum % 10);
    p = p.next;
    l1 = l1 ? l1.next : l1;
    l2 = l2 ? l2.next : l2;
  }
  return preHead.next;
};