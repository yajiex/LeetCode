

class Solution:
    # @param ratings, a list of integer
    # @return an integer
    def candy(self, ratings):
        size=len(ratings)
        if size==0:
            return 0
        ans=1
        length=0
        pre=1
        bef=pre
        for i in range(1,size):
            if ratings[i]<ratings[i-1]:
                length=length+1
                if bef<=length:
                    ans=ans+1
                ans+=length
                pre=1
            else:
                cur=0
                if ratings[i]>ratings[i-1]:
                    cur=pre+1
                else:
                    cur=1
                ans+=cur
                pre=cur
                length=0
                bef=cur
        return ans
 