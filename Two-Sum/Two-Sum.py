


class Solution:
    
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        mp=[]
        ans=[]
        for i in range(len(num)):
            mp.append([num[i],i])
        mp.sort()
        index1=0
        index2=len(num)-1
        while index1<index2:
            temp=mp[index1][0]+mp[index2][0]
            if temp==target:
                ans=[min(mp[index1][1]+1,mp[index2][1]+1),max(mp[index1][1]+1,mp[index2][1]+1)]
                return ans
            elif temp<target:
                index1+=1
            else:
                index2-=1
        
 