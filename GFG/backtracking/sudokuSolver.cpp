
class Solution 
{
    public:
    bool findEmptyLocation(int grid[N][N], int &row, int &col){
    	for(int i=0; i<N; i++){
    		for(int j=0; j<N; j++){
    			if(grid[i][j]==0){
    				row = i;
    				col = j;
    				return true;
    			}
    		}
    	}
    	return false;
    }

    bool isValid(int row, int col, int grid[N][N], int val)
    {
        //check horizontal
        for(int i=0; i<N; i++){
            if(grid[row][i]==val) return false;
        }
        //check vertical
        for(int i=0; i<N; i++){
            if(grid[i][col]==val) return false;
        }
        //check box
        int idxR = row%3;
        int idxC = col%3;
        int boxR = row/3;
        int boxC = col/3;
    
        for(int i=boxR*3; i<3*(boxR+1); i++)
        {
            for(int j=boxC*3; j<3*(boxC+1); j++)
            {
                if(i==(boxR*3+idxR)&&j==(boxC*3+idxC)) continue;
                if(grid[i][j]==val) return false;
            }
        }
        return true;
    }
    //Function to print grids of the Sudoku.
    void printGrid (int grid[N][N]) 
    {
        // Your code here
        
        for(int i=0; i<N; i++){
            for(int j=0; j<N; j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
    
    //Function to find a solved Sudoku. 
    bool SolveSudoku(int grid[N][N])  
    { 
        int row, col;
        if(!findEmptyLocation(grid, row, col)) return true;
        for(int i=1; i<=9; i++){
            if(isValid(row, col, grid, i)){
                grid[row][col]=i;
                if(SolveSudoku(grid))
                    return true;
                grid[row][col]=0;
            }
        }
        return false;
    }
    
};
