

# Definition for a point
# class Point:
#     def __init__(self, a=0, b=0):
#         self.x = a
#         self.y = b

class Solution:
    # @param points, a list of Points
    # @return an integer
    def maxPoints(self, points):
        length=len(points)
        if length<3:
            return length
        ans=-1
        for i in range(length):
            slope={'int':0}
            cnt=1
            for j in range(length):
                if i==j:
                    continue;
                if points[i].x==points[j].x and points[i].y!=points[j].y:
                    slope['int']+=1
                elif points[i].x!=points[j].x:
                    k=1.0*(points[i].y-points[j].y)/(points[i].x-points[j].x)
                    slope[k]=1 if k not in slope else slope[k]+1
                else:
                    cnt+=1
            ans=max(ans,max(slope.values())+cnt)
        return ans
 