## 题意：
按要求重构二叉树

## 要求：


## 思路：
与Populating Next Right Pointers in Each Node不同之处在于本题的二叉树可以是任意形式的。
因此，对一个节点需要向右找到第一个节点。
对于left，如果right不存在，就在father的next节点去找left/right，依次找下去。
对于right，直接在father的next节点开始找。

需要注意的是，要先处理右子树，再处理左子树。

