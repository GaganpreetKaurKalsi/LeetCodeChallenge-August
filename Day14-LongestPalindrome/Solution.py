# Runtime: 28 ms
# Memory Usage: 12.9 MB
class Solution(object):
    def longestPalindrome(self, s):
        stri = {}
        length = 0
        flag=0
        for i in s:
            if i in stri:
                stri[i]+=1;
            else:
                stri[i]=1;
        print(stri)
        for i in stri:
            length = length + stri[i] - stri[i]%2
            if stri[i]%2 == 1: flag=1
        if flag==1:
            length+=1
        return length
        
