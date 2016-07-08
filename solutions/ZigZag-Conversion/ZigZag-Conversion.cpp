
class Solution {
public:
    string convert(string s, int nRows) {
        if(nRows==1)
            return s;
        string ans[nRows];
        for(int i=0;i<s.length(); )
        {
            for(int j=0;j<nRows&&i<s.length();j++)
                ans[j]+=s[i++];
            for(int j=nRows-2;j>0&&i<s.length();j--)
                ans[j]+=s[i++];
        }
        string str="";
        for(int i=0;i<nRows;i++)
            str+=ans[i];
        return str;
    }
};


 