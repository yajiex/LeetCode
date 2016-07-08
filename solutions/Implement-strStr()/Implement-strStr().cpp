
class Solution {
public:
    char *strStr(char *haystack, char *needle) {
        if(!*needle)
            return haystack;
        char *p1;
        char *p2;
        int len2=0;
        for(p2=needle;*p2;p2++)
            len2++;
        for(p1=haystack;*(p1+len2-1);p1++)
        {
            bool flag=true;
            for(p2=needle;*p2;p2++)
                if(*p2!=*(p2-needle+p1))
                {
                    flag=false;
                    break;
                }
            if(flag)
                return p1;
        }
        return NULL;
    }
};


 