

class Solution:
    # @param height, a list of integer
    # @return an integer
    def largestRectangleArea(self, height):
        size=len(height)
        if size==0:
            return 0
        sum=0
        s=[]
        height.append(0)
        size+=1
        i=0
        while i<size:
            if len(s)==0 or height[i]>height[s[-1]]:
                s.append(i)
            else:
                temp=s[-1]
                s.pop(-1)
                sum=max(sum,height[temp]*(i if len(s)==0 else i-s[-1]-1))
                i=i-1
            i=i+1
        return sum
        
 