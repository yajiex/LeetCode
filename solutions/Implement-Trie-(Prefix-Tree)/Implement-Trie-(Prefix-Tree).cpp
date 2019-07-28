// class TrieNode
// {
// public:
//     TrieNode *next[26];
//     bool isWord;
    
//     TrieNode()
//     {
//         isWord = false;
//         memset(next, 0, sizeof(next));
//     }
// };

// class Trie {
// public:
//     /** Initialize your data structure here. */
//     Trie() {
//         root = new TrieNode();
//     }
    
//     ~Trie()
//     {
//         clear(root);
//     }
    
//     /** Inserts a word into the trie. */
//     void insert(string word) {
//         auto p = root;
//         for(int i=0;i<word.size();i++)
//         {
//             auto index = word[i] - 'a';
//             if(p->next[index] == nullptr)
//             {
//                 p->next[index] = new TrieNode();
//             }
//             p = p->next[index];
//         }
//         p->isWord = true;
//     }
    
//     /** Returns if the word is in the trie. */
//     bool search(string word) {
//         auto p = find(word);
//         return p && p->isWord;
//     }
    
//     /** Returns if there is any word in the trie that starts with the given prefix. */
//     bool startsWith(string prefix) {
//         return find(prefix) != nullptr;
//     }

// private:
    
//     TrieNode* find(string word)
//     {
//         auto p = root;
//         for(int i=0;i<word.size();i++)
//         {
//             auto index = word[i]-'a';
//             if(p->next[index]==nullptr)
//             {
//                 p=nullptr;
//                 break;
//             }
//             else
//             {
//                 p=p->next[index];
//             }
//         }
//         return p;
//     }
    
//     void clear(TrieNode* root)
//     {
//         for(int i=0;i<26;i++)
//         {
//             if(root->next[i] != nullptr)
//             {
//                 clear(root->next[i]);
//             }
//         }
//         delete(root);
//     }
    
//     TrieNode *root;
// };

// /**
//  * Your Trie object will be instantiated and called as such:
//  * Trie obj = new Trie();
//  * obj.insert(word);
//  * bool param_2 = obj.search(word);
//  * bool param_3 = obj.startsWith(prefix);
//  */

// 2019-07-28
// O(n)
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

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */