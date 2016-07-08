
class Solution {
public:
    int lengthOfLastWord(const char *s) {
        int cnt=0;
        int ans=0;
        while(*s)
        {
            cnt=*s==' '?0:cnt+1;
            ans=cnt>0?cnt:ans;
            s++;
        }
        return ans;
    }
};


 