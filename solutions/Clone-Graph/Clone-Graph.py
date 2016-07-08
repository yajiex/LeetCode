

# Definition for a undirected graph node
# class UndirectedGraphNode:
#     def __init__(self, x):
#         self.label = x
#         self.neighbors = []

class Solution:
    # @param node, a undirected graph node
    # @return a undirected graph node
    def cloneGraph(self, node):
        dict = {}
        if node==None:
            return node
        q=[]
        q.append(node)
        while len(q)>0:
            s = q[0]
            q.pop(0)
            if s not in dict:
                next = UndirectedGraphNode(s.label)
                dict[s] = next
            for i in range(len(s.neighbors)):
                next = s.neighbors[i]
                if next not in dict:
                    p = UndirectedGraphNode(next.label)
                    dict[next]=p
                    q.append(next)
                dict[s].neighbors.append(dict[next])
        return dict[node]
 