class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        
        # iterate thru list then see if find complement 
        mp = {}
        for i in range(len(nums)):
            comp = target - nums[i]
            if comp in mp:
                return [mp[comp],i]
            mp[nums[i]] = i
            #putting value of thing in index
        return []




