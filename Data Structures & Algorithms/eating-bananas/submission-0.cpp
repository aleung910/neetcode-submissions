class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        
        //use binary search ++ -- if can each pile
        // can be eatten by k if not k+++ or k-- to see the lowets 
        //nunber of hours 

        int l =1; int r= *max_element(piles.begin(),piles.end());
        int res = r;
        while(l<=r){
            int k  = l+(r-l)/2;
            long long totalTime = 0;
            for(int p:piles){
                totalTime+=ceil(static_cast<double>(p)/k); //need full hour regardless
            }

            if(totalTime<=h){
                res = k;
                //BECAUSE K IS SAVED THAN I JUST SHRINK MY SEARCH WINDOW
                r=k-1; // cause ik if it works just try to make smaller to check if also works
            }
            else{
                l=k+1; //need to expand 
            }
        }
        return res;
    }
};
