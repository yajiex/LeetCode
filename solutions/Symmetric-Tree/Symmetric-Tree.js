/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {boolean}
 */
var isSymmetric = function (root) {
  if (root === null) {
    return true;
  }
  const st1 = [root.left];
  const st2 = [root.right];
  while (st1.length > 0 && st2.length > 0) {
    const l = st1.pop();
    const r = st2.pop();
    if (l === null && r === null) {
      continue;
    } else if (l !== null && r !== null && l.val === r.val) {
      st1.push(l.left);
      st1.push(l.right);
      st2.push(r.right);
      st2.push(r.left);
    } else {
      return false;
    }
  }
  return true;
};