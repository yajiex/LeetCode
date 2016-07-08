
class Solution {
public:
    int romanToInt(string s) {
        int ans=0;
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='I')
                ans+=(ans>=5?-1:1);
            else if(s[i]=='V')
                ans+=5;
            else if(s[i]=='X')
                ans+=(ans>=50?-10:10);
            else if(s[i]=='L')
                ans+=50;
            else if(s[i]=='C')
                ans+=(ans>=500?-100:100);
            else if(s[i]=='D')
                ans+=500;
            else if(s[i]=='M')
                ans+=1000;
        }
        return ans;
    }
};


 