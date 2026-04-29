class Solution:
    def hasDuplicate(self, nums: List[int]) -> bool:

        # if there are dups go thru list if seen before then ur cooked
        # can sort then see if there are dups 
        
        nums.sort()
        for i in range(len(nums)):
            if(i>0 and nums[i]==nums[i-1]):
                return True;
        return False;



        