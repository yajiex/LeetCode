/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {string[]}
 */
var binaryTreePaths = function (root) {
  const ans = [];
  if (root === null) {
    return ans;
  }
  const q = [[root, '']];
  while (q.length !== 0) {
    const [node, str] = q.shift();
    if (node.left === null && node.right === null) {
      ans.push(str + node.val);
    }
    if (node.left !== null) {
      q.push([node.left, `${str}${node.val}->`]);
    }
    if (node.right !== null) {
      q.push([node.right, `${str}${node.val}->`]);
    }
  }
  return ans;
};