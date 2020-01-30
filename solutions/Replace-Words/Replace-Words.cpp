class TrieNode
{
public:
    TrieNode *next[26];
    string word;
    
    TrieNode()
    {
        memset(next, 0, sizeof(next));
    }
};

class Trie {
public:
    /** Initialize your data structure here. */
    Trie() {
        root = new TrieNode();
    }
    
    /** Inserts a word into the trie. */
    void insert(string word) {
        auto p = root;
        for(int i=0;i<word.size();i++)
        {
            auto index = word[i] - 'a';
            if(p->next[index] == nullptr)
            {
                p->next[index] = new TrieNode();
            }
            p = p->next[index];
        }
        p->word = word;
    }
    
    TrieNode* root;
};

class Solution {
public:
    string replaceWords(vector<string>& dict, string sentence) {
        Trie* trie = new Trie();
        for(int i=0;i<dict.size();i++) {
            trie->insert(dict[i]);
        }
        
        string ans;
        istringstream ss(sentence); 
  
        while(ss) {
            string word; 
            ss >> word;
            TrieNode* cur = trie->root;
            for(int i=0;i<word.length();i++) {
                if(!cur->next[word[i] - 'a'] || cur->word != "") {
                    break;
                }
                cur = cur->next[word[i] - 'a'];
            }
            if(ans.length() > 0 && word != "") {
                ans += ' ';
            }
            ans += cur->word == "" ? word : cur->word;
        }
        
        return ans;
    }
};