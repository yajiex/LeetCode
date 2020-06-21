class Solution {
public:
    vector<string> getFolderNames(vector<string>& names) {
        unordered_map<string, int> mp;
        vector<string> ans;
        for(int i=0;i<names.size();i++) {
            string s = names[i];
            int cnt = mp[s];
            int tmpCnt = cnt;
            string tmpS = s;
            if(cnt == 0) {
                s = names[i];
            } else {
                tmpS = names[i] + '(' + to_string(tmpCnt) + ')';
                tmpCnt++;
                s = tmpS;
            }
            
            
            if(mp[s] == 0) {
                ans.push_back(s);
                mp[names[i]]++;
                mp[s] = 1;
            } else {
                while(mp[s] != 0) {
                    tmpS = names[i] + '(' + to_string(tmpCnt) + ')';
                    tmpCnt++;
                    s = tmpS;
                }
                ans.push_back(s);
                mp[names[i]]++;
                mp[s] = 1;
            }
        }
        return ans;
    }

};