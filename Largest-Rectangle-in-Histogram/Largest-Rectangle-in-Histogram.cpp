
class Solution {
public:
    int largestRectangleArea(vector<int> &height) {
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


 