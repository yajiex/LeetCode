
class Solution:
    # @param num, a list of integer
    # @return an integer
    def longestConsecutive(self, num):
        dict={x:False for x in num}
        ans=-1
        for i in dict:
            if dict[i]==False:
                cur=i+1
                len1=0
                while cur in dict and dict[cur]==False:
                    len1+=1
                    dict[cur]=True
                    cur+=1
                cur=i-1
                len2=0
                while cur in dict and dict[cur]==False:
                    len2+=1
                    dict[cur]=True
                    cur-=1
                ans=max(ans,1+len1+len2)
        return ans
 