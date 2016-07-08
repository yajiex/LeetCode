
class Solution {
public:
    bool isNumber(const char *s) {
        while(*s==' ')
            s++;
        if(*s=='\0')
            return false;
        if(*s=='-'||*s=='+')
            s++;
        bool flag=isdigit(*s);
        while(isdigit(*s))
            s++;
        if(*s=='.')
        {
            s++;
            flag=isdigit(*s)||flag;
            while(isdigit(*s))
                s++;
        }
        if(!flag)
            return false;
        if(*s=='e'||*s=='E')
        {
            s++;
            if(*s=='+'||*s=='-')
                s++;
            if(!isdigit(*s))
                return false;
            while(isdigit(*s))
                s++;
        }
        while(*s==' ')
            s++;
        return *s=='\0';
    }
};


 