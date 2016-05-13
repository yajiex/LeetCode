
class Solution {
public:
    string countAndSay(int n) {
        string ans="1";
        for(int i=1;i<n;i++)
        {
            stringstream ss;
            int cnt=0;
            char last=ans[0];
            for(int j=0;j<=ans.length();j++)
            {
                if(ans[j]==last)
                    cnt++;
                else
                {
                    ss<<cnt<<last;
                    cnt=1;
                    last=ans[j];
                }
            }
            ans=ss.str();
        }
        return ans;
    }
};


 