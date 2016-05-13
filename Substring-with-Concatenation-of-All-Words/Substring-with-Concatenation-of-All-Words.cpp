
class Solution {
public:
    vector<int> findSubstring(string S, vector<string> &L) {
        vector<int>ans;
        int n=L.size();
        if(n==0)
            return ans;
        int len=L[0].length();
        int lens=S.length();
        if(lens==0)
            return ans;
        map<string,int>words,cur;
        for(int i=0;i<n;i++)
            words[L[i]]++;
        for(int i=0;i<=(lens-n*len);i++)
        {
            cur.clear();
            int j=0;
            for( ;j<n;j++)
            {
                string temp=S.substr(i+j*len,len);
                if(words.find(temp)==words.end())
                    break;
                cur[temp]++;
                if(words[temp]<cur[temp])
                    break;
            }
            if(j==n)
                ans.push_back(i);
        }
        return ans;
    }
};


 