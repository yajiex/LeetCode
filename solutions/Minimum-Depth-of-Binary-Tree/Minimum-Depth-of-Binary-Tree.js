/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number}
 */
var minDepth = function (root) {
  if (root === null) {
    return 0;
  }
  const q = [root];
  let ans = 0;
  while (q.length > 0) {
    ans++;
    const length = q.length;
    for (let i = 0; i < length; i++) {
      const temp = q.shift();
      if (temp.left !== null) {
        q.push(temp.left);
      }
      if (temp.right !== null) {
        q.push(temp.right);
      }
      if (temp.left === null && temp.right === null) {
        return ans;
      }
      q.unshift();
    }
  }
};