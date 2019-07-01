class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        stack<int> st;
        vector<int> ans(T.size(), 0);
        for(int i=0;i<T.size();i++)
        {
            while(!st.empty() && T[i] > T[st.top()])
            {
                int idx = st.top();
                st.pop();
                ans[idx] = i - idx;
            }
            st.push(i);
        }
        
        return ans;
    }
};