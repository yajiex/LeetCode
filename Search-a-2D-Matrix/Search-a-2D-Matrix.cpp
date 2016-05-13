
class Solution {
public:
    bool searchMatrix(vector<vector<int> > &matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        int l=0;
        int r=n-1;
        int mid;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(matrix[mid][m-1]==target)
                return true;
            else if(matrix[mid][m-1]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        int row=l;
        if(row>=n)
            return false;
        l=0;
        r=m-1;
        while(l<=r)
        {
            mid=l+(r-l)/2;
            if(matrix[row][mid]==target)
                return true;
            else if(matrix[row][mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return false;
    }
};


 