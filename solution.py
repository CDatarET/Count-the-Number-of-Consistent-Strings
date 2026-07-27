class Solution:
    def countConsistentStrings(self, allowed: str, words: List[str]) -> int:
        d = {}
        for c in allowed:
            d[c] = 1
        
        ret = 0
        for word in words:
            broke = False
            for c in word:
                if c not in allowed:
                    broke = True
                    break
                
            if not broke:
                ret += 1
        
        return ret
