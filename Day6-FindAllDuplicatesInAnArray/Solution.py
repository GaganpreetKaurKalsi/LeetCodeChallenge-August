# Runtime: 332 ms
# Memory Usage: 22.8 MB

class Solution(object):
    def findDuplicates(self, nums):
        dict1 = {}
        for i in nums:
            if i in dict1:
                dict1[i]+=1
            else:
                dict1[i]=1
        return [i for i in dict1 if dict1[i]==2]
