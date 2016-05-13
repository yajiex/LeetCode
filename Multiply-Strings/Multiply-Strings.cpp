
class Solution {
public:
    string multiply(string num1, string num2) {
        if(num1=="0" || num2=="0")
            return "0";
        int len1=num1.length();
        int len2=num2.length();
        int len=len1+len2;
        int *n1=new int[len1];
        int *n2=new int[len2];
        int *ans=new int[len];
        memset(ans,0,sizeof(int)*len);
        for(int i=0;i<len1;i++)
            n1[i]=num1[i]-'0';
        for(int i=0;i<len2;i++)
            n2[i]=num2[i]-'0';
        for(int i=0;i<len1;i++)
            for(int j=0;j<len2;j++)
                ans[i+j+1]+=n1[i]*n2[j];
        string res="";
        for(int i=len-1;i>=0;i--)
        {
            if(i>0)
                ans[i-1]+=ans[i]/10;
            ans[i]%=10;
            res=char(ans[i]+'0')+res;        
        }
        res=(res[0]=='0'?res.substr(1):res);
        return res;
    }
};


 