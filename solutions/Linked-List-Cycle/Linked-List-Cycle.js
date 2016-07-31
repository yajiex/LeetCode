/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */

/**
 * @param {ListNode} head
 * @return {boolean}
 */
var hasCycle = function (head) {
  if (head === null || head.next === null) {
    return false;
  }
  let fast = head.next.next;
  let slow = head;
  while (slow !== null) {
    if (fast === null) {
      return false;
    }
    fast = fast.next;
    if (fast === null) {
      return false;
    }
    fast = fast.next;
    slow = slow.next;
    if (slow === fast) {
      return true;
    }
  }
  return false;
};