
class Solution{
    public:
    vector<string> possiblePaths;
    bool isSafe(int row, int col, vector<vector<int>>& m, int n, vector<vector<bool>> &visited){
        if(row==-1||row==n||col==-1||col==n||visited[row][col]||m[row][col]==0) return false;
        return true;
    }
    
    void helper(int row, int col, vector<vector<int>>&m, vector<vector<bool>> &visited, string &path){
        int n = m.size();
        if(row==-1||row==n||col==-1||col==n||visited[row][col]||m[row][col]==0) return;
        if(row==n-1&&col==n-1){
            possiblePaths.push_back(path);
            return;
        }
        visited[row][col]=true;
        if(isSafe(row+1,col,m,n,visited)){
            path.push_back('D');
            helper(row+1,col,m,visited,path);
            path.pop_back();
        }
        if(isSafe(row,col-1,m,n,visited)){
            path.push_back('L');
            helper(row,col-1,m,visited,path);
            path.pop_back();
        }
        if(isSafe(row,col+1,m,n,visited)){
            path.push_back('R');
            helper(row,col+1,m,visited,path);
            path.pop_back();
        }
        if(isSafe(row-1,col,m,n,visited)){
            path.push_back('U');
            helper(row-1,col,m,visited,path);
            path.pop_back();
        }
        visited[row][col]=false;
    }
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        string path = "";
        if(m[0][0]==0||m[n-1][n-1]==0) return possiblePaths;
        helper(0,0,m,visited,path);
        return possiblePaths;
    }
};

