class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        count={}
        for i in nums:
            count[i] = 1 + count.get(i, 0)
        for k,v in count.items():
            if v>(len(nums))/2:
                return k
        