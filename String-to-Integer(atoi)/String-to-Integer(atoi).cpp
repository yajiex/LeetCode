
class Solution {
public:
    int atoi(const char *str) {
        int start=0;
        while(str[start]==' ')
            start++;
        bool flag=true;
        if(str[start]=='+')
            start++;
        else if(str[start]=='-')
        {
            flag=false;
            start++;
        }
        int ans=0;
        for(int i=start;i<strlen(str);i++)
        {
            if(!isdigit(str[i]))
                break;
            if(ans>INT_MAX/10 || ans==INT_MAX/10 && str[i]-'0'>INT_MAX%10)
                if(flag)
                    return INT_MAX;
                else
                    return INT_MIN;
            ans=ans*10+str[i]-'0';
        }
        return flag?ans:-ans;
    }
};


 