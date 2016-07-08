

class Solution:
    # @param digits, a list of integer digits
    # @return a list of integer digits
    def plusOne(self, digits):
        ans=[]
        flag=1
        for i in range(len(digits)-1,-1,-1):
            temp=digits[i]+flag
            if temp>9:
                temp-=10
                flag=1
            else:
                flag=0
            ans.append(temp)
        if flag:
            ans.append(flag)
        ans.reverse()
        return ans
 