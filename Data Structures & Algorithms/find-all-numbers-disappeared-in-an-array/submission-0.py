class Solution:
    def findDisappearedNumbers(self, nums: List[int]) -> List[int]:
        dis=[]
        for i in range(1,len(nums)+1):
            if i not in set(nums):
                dis.append(i)
        return dis