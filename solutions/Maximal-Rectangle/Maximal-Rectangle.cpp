
// class Solution {
// public:
//     int maxRectangleArea(vector<int> height)
//     {
//         stack<int> st;
//         height.push_back(0);
//         int n=height.size();
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             if(st.empty() || height[i]>height[st.top()])
//                 st.push(i);
//             else
//             {
//                 int index=st.top();
//                 st.pop();
//                 ans=max(ans,height[index]*(st.empty()?i:i-st.top()-1));
//                 i--;
//             }
//         }
//         return ans;
//     }
//     int maximalRectangle(vector<vector<char> > &matrix) {
//         int n=matrix.size();
//         if(n==0)
//             return 0;
//         int m=matrix[0].size();
//         vector<vector<int> > height(n,vector<int>(m,0));
//         int ans=0;
//         for(int i=0;i<n;i++)
//         {
//             for(int j=0;j<m;j++)
//                 if(i==0)
//                     height[i][j]=(matrix[i][j]=='1'?1:0);
//                 else
//                     height[i][j]=(matrix[i][j]=='1'?height[i-1][j]+1:0);
//             ans=max(ans,maxRectangleArea(height[i]));
//         }
//         return ans;
//     }
// };

// Review - 20190726
// O(nm)
class Solution {
public:
    int maximalRectangle(vector<vector<char>>& matrix) {
        int n = matrix.size();
        if(n==0)
        {
            return 0;
        }
        int m = matrix[0].size();
        if(m==0)
        {
            return 0;
        }
        vector<vector<int>> heights = vector<vector<int>>(n, vector<int>(m, 0));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if (i == 0)
                {
                    heights[i][j] = matrix[i][j] == '1' ? 1 : 0;
                }
                else
                {
                    heights[i][j] = matrix[i][j] == '1' ? heights[i-1][j] + 1 : 0;                    
                }
            }
        }
        int ans = 0;
        for(int i=0;i<n;i++)
        {
            ans = max(ans, maxRectangleArea(heights[i]));
        }
        
        return ans;
            
    }
private:
     int maxRectangleArea(vector<int> height) {
        stack<int> st;
        height.push_back(0);
        int n=height.size();
        int ans=0;
        for(int i=0;i<n;i++)
        {
            if(st.empty() || height[i]>height[st.top()])
                st.push(i);
            else
            {
                int index=st.top();
                st.pop();
                ans=max(ans,height[index]*(st.empty()?i:i-st.top()-1));
                i--;
            }
        }
        return ans;
    }
};
 