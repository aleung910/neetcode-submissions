class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        #vector of vector 
        arr = []
       
        myMap = {}
        # need a dictionary of lists

        for c in strs:
            # tmp = c
            sorted_string = ''.join(sorted(c)) #sort(curr.begin(),curr.end())
            # need to initalized key with empty list before appending...
            if sorted_string not in myMap:
                myMap[sorted_string] = []
            myMap[sorted_string].append(c)

        # now in my dict sorted and then words that align with that
        # need to go thru the dict and push bak into arr

        for val in myMap.values():
            arr.append(val);
        return arr
        