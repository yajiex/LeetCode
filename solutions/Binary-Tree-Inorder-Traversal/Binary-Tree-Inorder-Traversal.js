/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} root
 * @return {number[]}
 */
var inorderTraversal = function (root) {
  const st = [];
  const ans = [];
  while (st.length !== 0 || root) {
    if (root) {
      st.push(root);
      root = root.left;
    }
    else {
      root = st.pop();
      ans.push(root.val);
      root = root.right;
    }
  }
  return ans;
};