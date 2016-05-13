
class Solution {
public:
    void reverseWords(string &s) {
        string ans;
        for(int i=s.length()-1;i>=0; )
        {
            while(i>=0 && s[i]==' ')
                i--;
            if(i<0)
                break;
            if(!ans.empty())
                ans.push_back(' ');
            string temp;
            while(i>=0 && s[i]!=' ')
                temp.push_back(s[i--]);
            reverse(temp.begin(),temp.end());
            ans.append(temp);
        }
        s=ans;
    }
};


 