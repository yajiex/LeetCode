
class Solution {
public:
    bool isPalindrome(string s) {
        if(s=="")
            return true;
        int p=0;
        int q=s.length()-1;
        while(p<q)
        {
            while(!isalpha(s[p]) && !isdigit(s[p]) && p<q)
                p++;
            while(!isalpha(s[q]) && !isdigit(s[q]) && p<q)
                q--;
            if(p>=q)
                return true;
            if(isalpha(s[p]) && isalpha(s[q]))
                if(toupper(s[p])!=toupper(s[q]))
                    return false;
                else
                {
                    p++;
                    q--;
                }
            else if(s[p]==s[q])
            {
                p++;
                q--;
            }
            else
                return false;
        }
        return true;
    }
};


 