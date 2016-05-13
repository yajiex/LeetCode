
class Solution {
public:
    int ladderLength(string start, string end, unordered_set<string> &dict) {
        if(start.length()!=end.length())
            return 0;
        queue<string>q;
        q.push(start);
        dict.erase(start);
        int ans=1;
        int cnt=1;
        while(dict.size()>0 && !q.empty())
        {
            string cur=q.front();
            q.pop();
            cnt--;
            for(int i=0;i<cur.length();i++)
            {
                string temp=cur;
                for(char j='a';j<='z';j++)
                {
                    if(temp[i]==j)
                        continue;
                    temp[i]=j;
                    if(temp==end)
                        return ans+1;
                    if(dict.find(temp)!=dict.end())
                        q.push(temp);
                    dict.erase(temp);
                }
            }
            if(cnt==0)
            {
                cnt=q.size();
                ans++;
            }
        }
        return 0;
    }
};


 