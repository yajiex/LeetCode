class Solution {
public:
    vector<vector<string>> displayTable(vector<vector<string>>& orders) {
        vector<vector<string>> ans;
        map<int, map<string, int>> mp;
        set<string> items;
        for(int i=0;i<orders.size();i++) {
            string customer = orders[i][0];
            string table = orders[i][1];
            string item = orders[i][2];
            items.insert(item);
            int t = stoi(table);
            if(mp.find(t) == mp.end()) {
                map<string, int> m;
                m[item] = 1;
                mp[t] = m;
            } else {
                map<string, int> m = mp[t];
                if(m.find(item) == m.end()) {
                    m[item] = 1;
                } else {
                    m[item] += 1;
                }
                mp[t] = m;
            }
        }
        
        if(mp.size() > 0) {
            vector<string> vec;
            vec.push_back("Table");
            for(const string &item: items) {
                vec.push_back(item);
            }
            ans.push_back(vec);
            for(auto it = mp.begin();it != mp.end(); it++) {
                vector<string> v;
                auto table = it->first;
                v.push_back(to_string(table));
                auto tmp = it->second;
                for(const string &item: items) {
                    if(tmp.find(item) == tmp.end()) {
                        v.push_back("0");
                    } else {
                        v.push_back(to_string(tmp[item]));
                    }
                }
                ans.push_back(v);
            }
        }
        
        return ans;
    }
};