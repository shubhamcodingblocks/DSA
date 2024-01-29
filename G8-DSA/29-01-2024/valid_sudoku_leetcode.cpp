class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& a) {
        int n = 9, m= 9;
        bool flag = true;
        for(int row=0;row<9;row++){
            for(int col=0;col<9;col++){
                char ele = a[row][col];
                // check if current cell is empty
                if(ele=='.'){
                    continue;
                }
                // check in its row
                int ct = 0;
                for(int i=0;i<9;i++){
                    if(a[i][col]==ele){
                        ct++;
                    }
                    if(ct>1){
                        flag = false;
                        break;
                    }
                }
                // check in its col
                ct = 0;
                for(int i=0;i<9;i++){
                    if(a[row][i]==ele){
                        ct++;
                    }
                    if(ct>1){
                        flag=false;
                        break;
                    }
                }
                // check in its corresponding 2D matrix
                ct = 0;
                int tlrow = (row/3)*3; // top left row coordinate of that box
                int tlcol = (col/3)*3; // top left col coordinate of that box
                for(int i=tlrow;i<tlrow+3;i++){
                    for(int j=tlcol;j<tlcol+3;j++){
                        if(a[i][j]==ele){
                            ct++;
                        }
                        if(ct>1){
                            flag = false; // invalid sudoku
                            break;
                        }
                    }	
                    if(flag==false){ 
                        break;
                    }
                }
            }
            if(flag==false){
            	break;
            }
        }
        return flag;
    }
};