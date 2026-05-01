class Solution:
    def twoSum(self, numbers: List[int], target: int) -> List[int]:
        
        #so i know its already sorted least to highest
        # one valid solution
        #i know that index1 !=index2 
        left , right = 0 , len(numbers)-1

        while left<right :
            currSum = numbers[left] + numbers[right]
            if currSum > target:
                right-=1
            elif currSum < target:
                left+=1
            else:
                return [left+1,right+1]