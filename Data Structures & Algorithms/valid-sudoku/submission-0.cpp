class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool row[9][9] = {false};
        bool col[9][9] = {false};
        bool box[9][9] = {false};

        for(int i=0;i<9;i++){
            for(int j=0;j<9;j++){
                if(board[i][j]=='.') continue;
                int index = board[i][j]-'0'-1; // changed char to index to 0th
                int area = (i/3)*3 + (j/3);

                if(row[i][index] || col[j][index] || box[area][index]) return false;
                //already seen
                row[i][index]  = true;
                col[j][index] = true;
                box[area][index] = true;
            }
        }
        return true;
    }
};
