

class Solution:
    # @return a list of lists of length 3, [[val1,val2,val3]]
    def threeSum(self, num):
        n=len(num)
        num.sort()
        ans=[]
        for i in range(n):
            if i>0 and num[i]==num[i-1]:
                continue
            start=i+1
            end=n-1
            a=num[i]
            while start<end:
                b=num[start]
                c=num[end]
                if start>i+1 and b==num[start-1]:
                    start+=1
                    continue
                if end<n-1 and c==num[end+1]:
                    end-=1
                    continue
                temp=a+b+c
                if temp==0:
                    ans.append([a,b,c])
                    start+=1
                elif temp>0:
                    end-=1
                else:
                    start+=1
        return ans
 