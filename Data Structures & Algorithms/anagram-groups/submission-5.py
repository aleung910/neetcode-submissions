class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        mp = defaultdict(list)
        
        for n in strs:
            c = ''.join(sorted(n))
            mp[c].append(n)

        return list(mp.values())
