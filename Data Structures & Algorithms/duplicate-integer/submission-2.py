class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        # if there are dups go thru list if seen before then ur cooked
        # can sort then see if there are dups 
        
        mySet = set()
        for n in nums:
            if n not in mySet:
                mySet.add(n);
            else:
                return True;
        return False;


        