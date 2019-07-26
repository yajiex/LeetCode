
// class Solution {
// public:
//     int largestRectangleArea(vector<int> &height) {
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
// };

// Review - 20190726
// O(n)
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        heights.push_back(0);
        int ans = 0;
        for(int i=0;i<heights.size();i++)
        {
            if(st.empty() || heights[i] > heights[st.top()])
            {
                st.push(i);
            }
            else
            {
                int top = st.top();
                st.pop();
                ans = max(ans, heights[top] * (st.empty() ? i : i - st.top() - 1));
                i--;
            }
        }
        return ans;
    }
};
 