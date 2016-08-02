/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode} head
 * @return {ListNode}
 */
var swapPairs = function (head) {
  const preHead = new ListNode(0);
  preHead.next = head;
  let current = preHead;
  while (current.next !== null && current.next.next !== null) {
    const p = current.next;
    const q = p.next;
    current.next = q;
    p.next = q.next;
    q.next = p;
    current = p;
  }
  return preHead.next;
};

/* Recursively
 var swapPairs = function(head) {
 if(head === null || head.next === null) {
 return head;
 }
 const next = head.next;
 head.next = swapPairs(head.next.next);
 next.next = head;
 return next;
 };
 */