/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {TreeNode}
 */
var invertTree = function (root) {
  /* Recursive
   if (root) {
   [root.left, root.right] = [invertTree(root.right), invertTree(root.left)];
   }
   return root;
   */

  if (root === null) {
    return null;
  }
  const queue = [];
  queue.push(root);
  while (queue.length) {
    const temp = queue.shift();
    const left = temp.left;
    temp.left = temp.right;
    temp.right = left;
    if (temp.left !== null) {
      queue.push(temp.left);
    }
    if (temp.right !== null) {
      queue.push(temp.right);
    }
  }
  return root;
};