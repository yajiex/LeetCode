class Solution {
public:
    vector<string> subdomainVisits(vector<string>& cpdomains) {
        unordered_map<string, int> m; 

    for (const auto& word : cpdomains) 
    {
        int i    = word.find (" "); 
        int n    = stoi (word.substr (0, i)); 
        string s = word.substr (i+1, word.size ()-i-1);

        for (int i = s.size ()-1; i >= 0; i--) {
            if (s[i] == '.') m[s.substr (i+1, s.size ()-i-1)] += n; 
            else if (i == 0) m[s.substr (i,   s.size ()-i)  ] += n;
        }
    }

    vector<string> v;
    for (const auto& e : m) v.push_back (to_string (e.second) + " " + e.first);
    return v;
    }
};