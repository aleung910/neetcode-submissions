class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        # iterate thru list then see if find complement 
        mp = {}
        for i , n in enumerate(nums):
            comp = target - n
            if comp in mp:
                return [mp[comp],i]
            mp[n] = i
           



