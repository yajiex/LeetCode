

class Solution:
    # @return a string
    def intToRoman(self, num):
        op=["M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"]
        val=[1000,900,500,400,100,90,50,40,10,9,5,4,1]
        ans=""
        for i in range(13):
            cnt=num/val[i]
            while cnt:
                ans+=op[i]
                cnt=cnt-1
            num%=val[i]
        return ans;
 