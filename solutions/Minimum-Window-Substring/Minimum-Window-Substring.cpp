
// class Solution {
// public:
//     string minWindow(string S, string T) {
//         int lent=T.length();
//         int lens=S.length();
//         int needToFind[256]={0};
//         for(int i=0;i<lent;i++)
//             needToFind[T[i]]++;
//         int hasFound[256]={0};
//         int minBegin;
//         int minEnd;
//         int minWindow=lens+1;
//         int cnt=0;
//         char ch;
//         for(int begin=0,end=0;end<lens;end++)
//         {
//             if(needToFind[S[end]]==0)
//                 continue;
//             ch=S[end];
//             hasFound[ch]++;
//             if(hasFound[ch]<=needToFind[ch])
//                 cnt++;
//             if(cnt==lent)
//             {
//                 while(needToFind[S[begin]]==0 || hasFound[S[begin]]>needToFind[S[begin]])
//                 {
//                     if(hasFound[S[begin]]>needToFind[S[begin]])
//                     {
//                         hasFound[S[begin]]--;
//                     }
//                     begin++;
//                 }
//                 int length=end-begin+1;
//                 if(length<minWindow)
//                 {
//                     minWindow=length;
//                     minBegin=begin;
//                     minEnd=end;
//                 }
//             }
//         }
//         return minWindow<=lens?S.substr(minBegin,minEnd-minBegin+1):"";
//     }
// };

// 2019-07-21
// O(n)
class Solution {
public:
    string minWindow(string s, string t) {
        int lenS = s.length();
        int lenT = t.length();
        vector<int> toFind(256, 0);
        for(int i=0;i<lenT;i++)
        {
            toFind[t[i]]++;
        }
        vector<int> found(256, 0);
        int cntFound = 0;
        int ansLen = lenS + 1;
        int ansStart = 0;
        for(int start = 0, end = 0;end < lenS;end++)
        {
            if(toFind[s[end]] == 0)
            {
                continue;
            }
            found[s[end]]++;
            if(found[s[end]] <= toFind[s[end]])
            {
                cntFound++;
            }
            if (cntFound == lenT)
            {
                while(toFind[s[start]] == 0 || found[s[start]] > toFind[s[start]])
                {
                    if (found[s[start]] > toFind[s[start]])
                    {
                        found[s[start]]--;
                    }
                    start++;
                }
                int curLen = end - start + 1;
                if(curLen < ansLen)
                {
                    ansLen = curLen;
                    ansStart = start;
                }
            }
        }
        return ansLen <= lenS ? s.substr(ansStart, ansLen) : "";
    }
};

 