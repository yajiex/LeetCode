
class Solution {
public:
    bool ok(string str)
    {
        if(str.size()>1 && str[0]=='0')  
            return false;
        if(stoi(str)>255 || stoi(str)<0)
            return false;
        return true;
    }
    vector<string> restoreIpAddresses(string s) {
        vector<string> ans;
        int n=s.length();
        if(n>12 || n<4)
            return ans;
        for(int i=1;i<4;i++)
        {
            string first=s.substr(0,i);
            if(!ok(first))
                continue;
            for(int j=1;j<4 && i+j<n;j++)
            {
                string second=s.substr(i,j);
                if(!ok(second))
                    continue;
                for(int k=1;k<4 && i+j+k<n;k++)
                {
                    string third=s.substr(i+j,k);
                    string fourth=s.substr(i+j+k);
                    if(!ok(third) || !ok(fourth))
                        continue;
                    ans.push_back(first+"."+second+"."+third+"."+fourth);
                }
            }
        }
        return ans;
    }
};


 