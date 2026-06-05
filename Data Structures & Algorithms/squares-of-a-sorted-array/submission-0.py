class Solution:
    def sortedSquares(self, nums: List[int]) -> List[int]:
        square=[]
        for i in nums:
            square.append(i**2)
        return sorted(square)