class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        #can use map to track amount and then a max heap and go down

        mp = {}
        for n in nums:
            mp[n] = 1 + mp.get(n,0)
        
        # has key and # times shown up
        # python is minHeap automatically 
        maxHeap = []
        for key,val in mp.items():
            #python heapq handles tuple automatically wow
            heapq.heappush(maxHeap, (val, key))
            #actully popping out smallest ones and keeping largest
            if len(maxHeap) > k:
                heapq.heappop(maxHeap);
            
        res = []
        for i in range(k):
            #gets top node andpops at same and gets value
            res.append(heapq.heappop(maxHeap)[1]);
        return res