

class Solution:
    # @return a list of lists of length 4, [[val1,val2,val3,val4]]
    def fourSum(self, num, target):
        n=len(num)
        ans=set()
        dic={}
        num.sort()
        for i in range(n):
            for j in range(i+1,n):
                if num[i]+num[j] not in dic:
                    dic[num[i]+num[j]]=[(i,j)]
                else:
                    dic[num[i]+num[j]].append((i,j))
        for i in range(n):
            for j in range(i+1,n-2):
                temp=target-num[i]-num[j]
                if temp in dic:
                    for k in dic[temp]:
                        if k[0]>j:
                            ans.add((num[i],num[j],num[k[0]],num[k[1]]))
        return [list(i) for i in ans]
 