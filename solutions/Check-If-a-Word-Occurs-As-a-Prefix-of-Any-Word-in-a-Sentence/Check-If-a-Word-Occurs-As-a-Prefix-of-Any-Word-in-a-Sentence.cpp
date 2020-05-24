class Solution {
public:
    int isPrefixOfWord(string sentence, string searchWord) {
        vector<string> words = split(sentence, " ");
        for(int i=0;i<words.size();i++) {
            if(words[i].rfind(searchWord, 0) == 0) {
                return i+1;
            }
        }
        return -1;
    }

private:
    vector<string> split(const string& str, const string& delim)
{
    vector<string> tokens;
    size_t prev = 0, pos = 0;
    do
    {
        pos = str.find(delim, prev);
        if (pos == string::npos) pos = str.length();
        string token = str.substr(prev, pos-prev);
        if (!token.empty()) tokens.push_back(token);
        prev = pos + delim.length();
    }
    while (pos < str.length() && prev < str.length());
    return tokens;
}
};