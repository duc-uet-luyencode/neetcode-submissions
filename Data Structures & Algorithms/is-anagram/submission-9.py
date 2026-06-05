class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s)!=len(t): return False
        else:
            freS={}
            freT={}
            for i in range(len(s)):
                freS[s[i]]=freS.get(s[i],0)+1
                freT[t[i]]=freT.get(t[i],0)+1

            return freS==freT 
