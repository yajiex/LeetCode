class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> st;
        st.insert('a');
        st.insert('e');
        st.insert('i');
        st.insert('o');
        st.insert('u');
        
        int ans = 0;
        for(int i=0;i<k;i++) {
            ans += st.count(s[i]) ? 1 : 0;
        }
        int last = ans;
        for(int i=k;i<s.length();i++) {
            int x = st.count(s[i-k]) ? -1 : 0;
            int y = st.count(s[i]) ? 1 : 0;
            last = last + x + y;
            ans = max(ans, last);
        }
        
        return ans;
    }
};