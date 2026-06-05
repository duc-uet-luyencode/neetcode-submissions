class Solution:
    def maxDifference(self, s: str) -> int:
        count={}
        c=[]
        l=[]
        for i in s:
            count[i] = 1 + count.get(i, 0)
        for k,v in count.items():
            if v%2==0:
                c.append(v)
            else:
                l.append(v)
        return max(l)-min(c)
        