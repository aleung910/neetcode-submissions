class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        # anagrams if same length and same amt
        #of characters in each

        #edge cases if they are diffrent len
        if len(s) != len(t):
            return False;

        # can sort by alpha or find 
        #number of chars in each 
        myMap = {}
        for c in s:
            if c in myMap:
                myMap[c]+=1;
            else:
                myMap[c]=1;
        
        #we put in the amt of letters in s 
        # now go thru t and subtract?

        for c in t:
            if c in myMap:
                myMap[c]-=1;
            else:
                myMap[c]=1;
            
        for val in myMap.values():
            if val!=0:
                return False;
        
        return True;


