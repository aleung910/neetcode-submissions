class Solution:
    def trap(self, height: List[int]) -> int:
        if not height:
            return 0

        n = len(height)
        res = 0
        # iterates thru all heights
        for i in range(n):
            leftMax = rightMax = height[i]
            # finds tallest wall on my left of i
            for j in range(i):
                leftMax = max(leftMax, height[j])
            # finds tallest wall on my right of i 
            for j in range(i+1,n):
                rightMax = max(rightMax, height[j])
            
            res+=min(leftMax,rightMax) - height[i]
        return res


