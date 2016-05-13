

class Solution:
    # @return an integer
    def atoi(self, str):
        if str=="":
            return 0
        num=0
        flag=True
        n=len(str)
        start=0
        while str[start]==' ':
            start+=1
        if str[start]=='+':
            start+=1
        if str[start]=='-':
            start+=1
            flag=False
        for i in range(start,n):
            if str[i]<'0' or str[i]>'9':
                break
            if num>2147483647/10 or num==2147483647/10 and int(str[i])-int('0')>2147483647%10:
                if flag:
                    return 2147483647
                else:
                    return -2147483648
            num=num*10+int(str[i])-int('0')
        if flag:
            return num
        else:
            return -num
 