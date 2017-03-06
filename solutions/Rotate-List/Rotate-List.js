/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @param {number} k
 * @return {ListNode}
 */
var rotateRight = function (head, k) {
  if (!head) {
    return head;
  }

  let len = 1; // number of nodes
  let newHead = head;
  let tail = head;
  while (tail.next) { // get the number of nodes in the list
    tail = tail.next;
    len++;
  }
  tail.next = head; // circle the link
  if (k %= len) {
    for (let i = 0; i < len - k; i++) {
      tail = tail.next; // the tail node is the (len-k)-th node (1st node is head)
    }
  }
  newHead = tail.next;
  tail.next = null;
  return newHead;
};