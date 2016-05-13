

class Solution:
    # @return an integer
    def threeSumClosest(self, num, target):
        num.sort()
        first=True
        for i in range(len(num)):
            start=i+1
            end=len(num)-1
            while start<end:
                temp=num[i]+num[start]+num[end]
                if first:
                    ans=temp
                    first=False
                if abs(temp-target)<abs(ans-target):
                    ans=temp
                if target==temp:
                    return ans
                elif temp<target:
                    start+=1
                else:
                    end-=1
        return ans
 