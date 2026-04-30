class Solution:

    def encode(self, strs: List[str]) -> str:
        #iterate thru string and get number of times c appears
        if not strs:
            return ""
        
        sizes, res = [], ""
        for s in strs:
            sizes.append(len(s))
        for sz in sizes:
            res+= str(sz)
            res+=','
        res+='#'
        for s in strs:
            res+=s
        return res

    def decode(self, s: str) -> List[str]:
        if not s:
            return []
        sizes, res, i = [], [], 0
        while s[i]!='#':
            cur=""
            while s[i] != ',':
                cur+= s[i]
                i+=1
            sizes.append(int(cur))
            #to get out of ,
            i+=1
        #to skip hashtag
        i+=1
        for sz in sizes:
            res.append(s[i: i+ sz])
            i+=sz  # i assume we skip to the new word
        return res


    