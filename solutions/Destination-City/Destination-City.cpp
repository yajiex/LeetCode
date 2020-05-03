class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> st;
        unordered_set<string> et;
        for(int i=0;i<paths.size();i++) {
            string s = paths[i][0];
            string e = paths[i][1];
            st.insert(s);
            et.insert(e);
        }
        
        for(auto s: et) {
            if(!st.count(s)) {
                return s;
            }
        }
        
        return "";
    }
};