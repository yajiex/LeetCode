
class Solution {
public:
    string minWindow(string S, string T) {
        int lent=T.length();
        int lens=S.length();
        int needToFind[256]={0};
        for(int i=0;i<lent;i++)
            needToFind[T[i]]++;
        int hasFound[256]={0};
        int minBegin;
        int minEnd;
        int minWindow=lens+1;
        int cnt=0;
        char ch;
        for(int begin=0,end=0;end<lens;end++)
        {
            if(needToFind[S[end]]==0)
                continue;
            ch=S[end];
            hasFound[ch]++;
            if(hasFound[ch]<=needToFind[ch])
                cnt++;
            if(cnt==lent)
            {
                while(needToFind[S[begin]]==0 || hasFound[S[begin]]>needToFind[S[begin]])
                {
                    if(hasFound[S[begin]]>needToFind[S[begin]])
                    {
                        hasFound[S[begin]]--;
                    }
                    begin++;
                }
                int length=end-begin+1;
                if(length<minWindow)
                {
                    minWindow=length;
                    minBegin=begin;
                    minEnd=end;
                }
            }
        }
        return minWindow<=lens?S.substr(minBegin,minEnd-minBegin+1):"";
    }
};


 