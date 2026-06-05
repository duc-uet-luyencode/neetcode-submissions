class Solution:
    def findMaxConsecutiveOnes(self, nums: List[int]) -> int:
        count=0
        c=[]
        for i in nums:
            if i==1:
                count+=1
            else:
                c.append(count)
                count=0
            c.append(count)
        return max(c)
        