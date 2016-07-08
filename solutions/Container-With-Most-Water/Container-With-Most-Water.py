

class Solution:
    # @return an integer
    def maxArea(self, height):
        head=0
        tail=len(height)-1
        ans=0
        while head<tail:
            tempans=min(height[head],height[tail])*(tail-head)
            ans=max(tempans,ans)
            if height[head]<height[tail]:
                head+=1
            else:
                tail-=1
        return ans
 