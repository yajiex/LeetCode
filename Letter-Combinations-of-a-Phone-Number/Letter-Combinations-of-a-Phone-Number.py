

class Solution:
    moderStr = ["","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"]
    # @return a list of strings, [s1, s2]
    def letterCombinations(self, digits):
        ans = []
        str = ""
        pos = 0
        self.solve(pos, str, ans, digits)
        return ans
    def solve(self,pos,str,ans,digits):
        if pos == len(digits):
            ans.append(str)
            return 
        for i in range(len(self.moderStr[int(digits[pos])-int('0')])):
            str+=self.moderStr[int(digits[pos])-int('0')][i]
            self.solve(pos+1,str,ans,digits)
            str = str[:-1]
 