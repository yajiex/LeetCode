const reverseLinkedList = (head, tail) => {
  let phead = null;
  while (head !== tail) {
    let p = head.next;
    head.next = phead;
    phead = head;
    head = p;
  }
  return phead;
};

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
var reverseKGroup = function (head, k) {
  if (!head || !head.next || k <= 1) {
    return head;
  }
  let cnt = 0;
  let p = head;
  let dummy = new ListNode(0);
  dummy.next = head;
  let prev = dummy;
  while (p) {
    p = p.next;
    cnt++;
    if (cnt === k) {
      let pm = prev.next;
      let pn = p;
      let phead = reverseLinkedList(pm, pn);
      prev.next = phead;
      pm.next = pn;
      prev = pm;
      cnt = 0;
    }
  }
  return dummy.next;
};