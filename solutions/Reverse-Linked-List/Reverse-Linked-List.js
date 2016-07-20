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
var reverseList = function (head) {
  let newHead = null;
  while (head !== null) {
    const next = head.next;
    head.next = newHead;
    newHead = head;
    head = next;
  }
  return newHead;
};

/*
 * Recursively
 */

/*
 var reverseListHelper = function(curHead, prevHead) {
 if(curHead === null) {
 return prevHead;
 }
 const next = curHead.next;
 curHead.next = prevHead;
 return reverseListHelper(next, curHead);
 };

 var reverseList = function(head) {
 return reverseListHelper(head, null);
 };

 */