
/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        unordered_map<UndirectedGraphNode*, UndirectedGraphNode*> ans;
        if(node==NULL)
            return node;
        queue<UndirectedGraphNode*> q;
        q.push(node);
        while(!q.empty())
        {
            UndirectedGraphNode *s = q.front();
            q.pop();
            if(!ans.count(s))
            {
                UndirectedGraphNode *next = new UndirectedGraphNode(s->label);
                ans[s]=next;
            }
            for(int i=0;i<s->neighbors.size();i++)
            {
                UndirectedGraphNode *next = s->neighbors[i];
                if(!ans.count(next))
                {
                    UndirectedGraphNode *p = new UndirectedGraphNode(next->label);
                    ans[next]=p;
                    q.push(next);
                }
                ans[s]->neighbors.push_back(ans[next]);
            }
        }
        return ans[node];
    }
};


 