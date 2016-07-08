

class Solution:
    # @param s, a string
    # @return a boolean
    def isPalindrome(self, s):
        p = 0
        q = len(s) - 1
        while p < q:
            while not s[p].isalpha() and not s[p].isdigit() and p<q:
                p = p + 1
            while not s[q].isalpha() and not s[q].isdigit() and p<q:
                q = q - 1
            if p>=q:
                return True
            if s[p].isalpha() and s[q].isalpha():
                if s[p].upper()!=s[q].upper():
                    return False
                else:
                    p = p + 1
                    q = q - 1
            elif s[p] == s[q]:
                p = p + 1
                q = q - 1
            else:
                return False
        return True
 