/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[][]}
 */
var levelOrder = function (root) {
  const ans = [];
  if (root === null) {
    return ans;
  }
  let levels = [root];
  while (levels.length > 0) {
    const temp = [];
    const curLevel = [];
    while (levels.length > 0) {
      const current = levels.shift();
      curLevel.push(current.val);
      if (current.left !== null) {
        temp.push(current.left);
      }
      if (current.right !== null) {
        temp.push(current.right);
      }
    }
    ans.push(curLevel);
    levels = temp;
  }
  return ans;
};