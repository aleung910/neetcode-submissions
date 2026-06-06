class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        mp = {}
        for n in nums:
            mp[n] = mp.get(n,0)+1
        maxHeap = []

        for key, val in mp.items():
            heapq.heappush(maxHeap, (val, key))
            if len(maxHeap) > k:
                heapq.heappop(maxHeap);

        res = []
        for i in range(k):
            res.append(heapq.heappop(maxHeap)[1]);
        return res
            

