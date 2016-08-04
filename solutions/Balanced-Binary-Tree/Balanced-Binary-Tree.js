const dfsHeight = (root) => {
  if (root === null) {
    return 0;
  }
  const left = dfsHeight(root.left);
  if (left === -1) {
    return -1;
  }
  const right = dfsHeight(root.right);
  if (right === -1) {
    return -1;
  }
  return Math.abs(left - right) > 1 ? -1 : Math.max(left, right) + 1;
};

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
var isBalanced = function (root) {
  return dfsHeight(root) !== -1;
};