const merge = (l1, l2) => {
  const head = new ListNode(0);
  let p = head;
  while (l1 && l2) {
    if (l1.val < l2.val) {
      p.next = l1;
      p = l1;
      l1 = l1.next;
    } else {
      p.next = l2;
      p = l2;
      l2 = l2.next;
    }
  }
  p.next = l1 ? l1 : l2;
  return head.next;
};


const mergeKListsHelper = (lists, left, right) => {
  if (left < right) {
    const middle = left + Math.floor((right - left) / 2);
    return merge(mergeKListsHelper(lists, left, middle), mergeKListsHelper(lists, middle + 1, right));
  }
  return lists[left];
};

/**
 * Definition for singly-linked list.
 * function ListNode(val) {
 *     this.val = val;
 *     this.next = null;
 * }
 */
/**
 * @param {ListNode[]} lists
 * @return {ListNode}
 */
var mergeKLists = function (lists) {
  if (lists.length === 0) {
    return null;
  }

  return mergeKListsHelper(lists, 0, lists.length - 1);
};