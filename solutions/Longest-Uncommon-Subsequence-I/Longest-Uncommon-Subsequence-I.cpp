class Solution {
public:
    int findLUSlength(string a, string b) {
        return a != b ? std::max(a.size(), b.size()) : -1;
    }
};