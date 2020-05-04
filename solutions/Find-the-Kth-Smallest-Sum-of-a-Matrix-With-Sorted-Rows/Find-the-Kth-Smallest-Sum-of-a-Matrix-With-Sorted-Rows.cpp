class Solution {
public:
    int kthSmallest(vector<vector<int>>& mat, int k) {
        vector<int> row(mat[0]);
        for(int i = 1; i < mat.size(); ++i) {
            vector<int> nr;  // next row
            for(int j = 0; j < mat[i].size(); ++j)                          
                for(auto pathSum : row) 
                    nr.push_back(mat[i][j] + pathSum); // all possible path ends at [i,j] by far                    
                            
            sort(nr.begin(), nr.end());            
            nr.resize( min(k, int(nr.size())) );
            row=move(nr);                    
        }        
        return row[k-1];
    }
};