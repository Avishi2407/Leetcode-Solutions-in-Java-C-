class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int numRows = rowSum.size();
        int numCols = colSum.size();
        
        // Initialize the result matrix with zeros
        vector<vector<int>> result(numRows, vector<int>(numCols, 0));
        
        // Use pointers to iterate over rows and columns
        int i = 0, j = 0;
        
        while (i < numRows && j < numCols) {
            // Find the minimum value to place in the cell
            int minValue = min(rowSum[i], colSum[j]);
            result[i][j] = minValue;
            
            // Update the row and column sums
            rowSum[i] -= minValue;
            colSum[j] -= minValue;
            
            // Move to the next row or column
            if (rowSum[i] == 0) {
                ++i;
            }
            if (colSum[j] == 0) {
                ++j;
            }
        }
        
        return result;
    }
};