class TrieNode
{
public:
    TrieNode *next[26];
    bool isWord;
    
    TrieNode()
    {
        isWord = false;
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
        p->isWord = true;
    }
    
    /** Returns if the word is in the trie. */
    bool search(string word) {
        auto p = find(word);
        return p && p->isWord;
    }
    
    /** Returns if there is any word in the trie that starts with the given prefix. */
    bool startsWith(string prefix) {
        return find(prefix);
    }
private:
    TrieNode* find(string word) {
        auto p = root;
        for(int i=0;i<word.size();i++)
        {
            auto index = word[i] - 'a';
            if(p->next[index])
            {
                p = p->next[index];
            }
            else
            {
                p = nullptr;
                break;
            }
        }
        return p;
    }
    TrieNode* root;
};

class MagicDictionary {
public:
    /** Initialize your data structure here. */
    MagicDictionary() {
        trie = new Trie();
    }
    
    /** Build a dictionary through a list of words */
    void buildDict(vector<string> dict) {
        for(int i=0;i<dict.size();i++) {
            trie->insert(dict[i]);
        }
    }
    
    /** Returns if there is any word in the trie that equals to the given word after modifying exactly one character */
    bool search(string word) {
        for(int i=0;i<word.length();i++) {
            for(int j=0;j<26;j++) {
                char c = 'a' + j;
                if (c == word[i]) {
                    continue;
                }
                char tmp = word[i];
                word[i] = c;
                if(trie->search(word)) {
                    return true;
                }
                word[i] = tmp;
            }
        }
        return false;
    }

private:
    Trie* trie;
};

/**
 * Your MagicDictionary object will be instantiated and called as such:
 * MagicDictionary* obj = new MagicDictionary();
 * obj->buildDict(dict);
 * bool param_2 = obj->search(word);
 */