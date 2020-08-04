# Runtime: 28 ms
# Memory Usage: 12.7 MB

class Solution(object):
    def isPowerOfFour(self, num):
        n = 4
        if num==1 : return True
        while n<=num:
            if n==num : return True
            n = n*4
        return False
