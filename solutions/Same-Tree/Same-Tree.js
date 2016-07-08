/**
 * Definition for a binary tree node.
 * function TreeNode(val) {
 *     this.val = val;
 *     this.left = this.right = null;
 * }
 */
/**
 * @param {TreeNode} p
 * @param {TreeNode} q
 * @return {boolean}
 */
var isSameTree = function (p, q) {
    if (null === p && null === q) {
        return true;
    } else if (null !== p && null !== q) {
        return isSameTree(p.left, q.left) && isSameTree(p.right, q.right) && p.val === q.val;
    } else {
        return false;
    }
};