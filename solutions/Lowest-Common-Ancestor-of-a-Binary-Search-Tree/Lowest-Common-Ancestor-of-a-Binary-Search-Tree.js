/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {TreeNode}
 */
var lowestCommonAncestor = function (root, p, q) {
  let ans = root;
  while (true) {
    if (p.val < ans.val && q.val < ans.val) {
      ans = ans.left;
    } else if (p.val > ans.val && q.val > ans.val) {
      ans = ans.right;
    } else {
      return ans;
    }
  }
};