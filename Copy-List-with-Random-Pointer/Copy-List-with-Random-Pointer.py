

# Definition for singly-linked list with a random pointer.
# class RandomListNode:
#     def __init__(self, x):
#         self.label = x
#         self.next = None
#         self.random = None

class Solution:
    # @param head, a RandomListNode
    # @return a RandomListNode
    def copyRandomList(self, head):
        if head == None:
            return head
        node = head
        while node != None:
            newNode = RandomListNode(node.label)
            newNode.next = node.next
            node.next = newNode
            node = newNode.next
        node = head
        while node != None:
            if node.random != None:
                node.next.random = node.random.next
            node = node.next.next
        newHead = head.next
        node = head
        while node != None:
            newNode = node.next
            node.next = newNode.next
            if newNode.next != None:
                newNode.next = newNode.next.next
            node = node.next
        return newHead
 