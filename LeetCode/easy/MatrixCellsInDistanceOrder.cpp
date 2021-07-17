class Solution {
public:
    int calculateMDistance(int r, int c, int rc, int cc){
    	return (abs(r-rc)+abs(c-cc));
    }

    vector<vector<int>> allCellsDistOrder(int rows, int cols, int rCenter, int cCenter) {
        vector<vector<int>> DistanceMatrix;
        DistanceMatrix.reserve(rows*cols);
        
     	auto process_pos = [rows, cols, &DistanceMatrix](int r, int c) {
          if (0 <= r && r < rows && 0 <= c && c < cols){
             DistanceMatrix.push_back(vector<int>{r, c}); 
          }
        };
        
        process_pos(rCenter, cCenter); 
        int ring = 1;
        
        while(DistanceMatrix.size() < rows * cols) {
            for(int i = 0; i < ring; i++) {
                process_pos(rCenter - ring + i, cCenter + i);
                process_pos(rCenter + i, cCenter + ring - i);
                process_pos(rCenter + ring - i, cCenter - i);
                process_pos(rCenter - i, cCenter - ring + i);
            } 
            ring++;
        }

        return DistanceMatrix;
    }
};