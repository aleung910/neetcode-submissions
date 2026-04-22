class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        //bruteforce soltuion 
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==target){
                    return true;
                }
            }
        }
        return false;

        //binary search solution
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int row = 0; int col = colSize-1;
        while(row < rowSize && col>=0){
            int curr = matrix[row][col];
            if(curr==target){
                return true;
            }
            else if(curr>target){ //14 > 10
               row++; //need to move up or go up a row
            }
            else{
                col--; //if curr<target 14 < 15
            }
        }
        return false;
    }
};
