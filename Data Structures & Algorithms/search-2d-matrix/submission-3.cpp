class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //bruteforce soltuion 
        // for(int i=0;i<matrix.size();i++){
        //     for(int j=0;j<matrix[0].size();j++){
        //         if(matrix[i][j]==target){
        //             return true;
        //         }
        //     }
        // }
        // return false;

        //binary search solution
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int row = 0; int col = colSize-1;
        //starting at top right Corner
        while(row < rowSize && col>=0){
            int curr = matrix[row][col];
            if(curr==target){
                return true;
            }
            else if(curr>target){ //40 > 10
               col--; //need
            }
            else{
               row++; //8 < 10 so 
            }
        }
        return false;
    }
};
