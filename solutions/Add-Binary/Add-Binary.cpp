
class Solution {
public:
    string addBinary(string a, string b) {
        int n=a.length();
        int m=b.length();
        int flag=0;
        string ans="";
        int maxlen=max(m,n);
        for(int i=0;i<maxlen;i++)
        {
            int val1=i<n?a[n-1-i]-'0':0;
            int val2=i<m?b[m-1-i]-'0':0;
            int val=val1+val2+flag;
            flag=val/2;
            ans=char(val%2+'0')+ans;
        }
        return flag?"1"+ans:ans;
    }
};


 