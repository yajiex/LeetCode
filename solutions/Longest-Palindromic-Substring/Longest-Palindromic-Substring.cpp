
// class Solution {
// public:
//     int longestPalindromeHelper(string s,int i,int j)
//     {
//         int n=s.length();
//         while(i>=0&&j<n&&s[i]==s[j])
//         {
//             i--;
//             j++;
//         }
//         return j-i-1;
//     }
//     string longestPalindrome(string s) {
//         int n=s.length();
//         int maxlen=1;
//         int startpos=0;
//         for(int i=0;i<n;i++)
//         {
//             int len1=longestPalindromeHelper(s,i,i);
//             int len2=0;
//             if(i+1<n)
//                 len2=longestPalindromeHelper(s,i,i+1);
//             int curlen=max(len1,len2);
//             if(curlen>maxlen)
//             {
//                 maxlen=curlen;
//                 if(maxlen%2)
//                     startpos=i-maxlen/2;
//                 else
//                     startpos=i-(maxlen-1)/2;
//             }
//         }
//         return s.substr(startpos,maxlen);
//     }
// };


 // 2019-07-14
 // O(n^2)
class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.length();
        int maxLen = 0;
        int start = 0;
        for(int i=0;i<n;i++)
        {
            int len1 = helper(s, i, i);
            int len2 = i + 1 < n ? helper(s, i, i+1) : 0;
            int cur = max(len1, len2);
            if (cur > maxLen)
            {
                maxLen = cur;
                start = i - (maxLen - 1) / 2;
            }
            
        }
        return s.substr(start, maxLen);
    }
    
private:
    int helper(string s, int l, int r)
    {
        while(l >=0 && r < s.length() && s[l] == s[r])
        {
            l--;
            r++;
        }
        return r - l - 1;
    }
};