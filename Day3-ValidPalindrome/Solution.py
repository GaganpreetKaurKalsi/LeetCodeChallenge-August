# Runtime : 24ms
# Memory Usage : 14.5MB

class Solution(object):
    def isPalindrome(self, s):
        s = "".join(re.findall('([a-zA-Z0-9]+)',s)).lower()
        if s[::-1] == s:
            return True
        else:
            return False
