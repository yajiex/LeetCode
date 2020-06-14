// https://www.geeksforgeeks.org/kth-ancestor-of-a-node-in-an-n-ary-tree-using-binary-lifting-technique/
class TreeAncestor {
public:
    TreeAncestor(int n, vector<int>& parent) {
        height = (int)ceil(log2(n));
        table = vector<vector<int>>(n+1, vector<int>(height+1, -1));
        for(int i=0;i<parent.size();i++) {
            if(parent[i] != -1) {
                calculateSparse(parent[i], i);
            }
        }
    }
    
    int getKthAncestor(int node, int k) {
        for (int i = 0; i <= height; i++) 
        { 
            if (k & (1 << i)) 
            { 
                node = table[node][i]; 
                if (node == -1) 
                    break; 
            } 
        } 
        return node; 
    }

private:
    void calculateSparse(int u, int v) {
        table[v][0] = u; 
        for (int i = 1; i <= height; i++) 
        { 
            table[v][i] = table[table[v][i - 1]][i - 1]; 
  
            if (table[v][i] == -1) 
                break; 
        } 
    }
    vector<vector<int>> table;
    int height;
};

/**
 * Your TreeAncestor object will be instantiated and called as such:
 * TreeAncestor* obj = new TreeAncestor(n, parent);
 * int param_1 = obj->getKthAncestor(node,k);
 */