
class Solution {
public:
    string simplifyPath(string path) {
        stack<string>s;
        string str;
        int length=path.length();
        for(int i=0;i<=length;i++)
        {
            if(path[i]=='/' || i==length)
            {
                if(str=="..")
                {
                    if(!s.empty())
                        s.pop();
                }
                else if(str!="." && str!="")
                {
                    s.push(str);
                }
                str="";
            }
            else
                str+=path[i];
        }
        if(s.empty())
            return "/";
        string ans;
        while(!s.empty())
        {
            ans="/"+s.top()+ans;
            s.pop();
        }
        return ans;
    }
};


 