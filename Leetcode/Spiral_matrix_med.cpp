/*Given an m x n matrix, return all elements of the matrix in spiral order.

Input: matrix = [[1,2,3],[4,5,6],[7,8,9]]
Output: [1,2,3,6,9,8,7,4,5] */

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();  //no.of rows
        int n = matrix[0].size();  //no. of columns
        int startRow = 0;
        int endRow = m-1;
        int startCol = 0;
        int endCol = n-1;

         vector<int> ans;

        while(startCol <= endCol && startRow <= endRow){
            //traverse start row
            for(int col = startCol; col <=endCol; col++)
            {
                ans.push_back(matrix[startRow][col]);
            }
            for(int row = startRow+1; row<=endRow; row++)
            {
                ans.push_back(matrix[row][endCol]);
            }
            for(int col = endCol-1; col>=startCol; col--)
            {   if(startRow == endRow){break;}
                ans.push_back(matrix[endRow][col]);
            }
            for(int row = endRow-1; row >= startRow+1; row--)
            {   if(startCol == endCol){break;}
                ans.push_back(matrix[row][startCol]);
            }

            startRow++;
            endRow--;
            startCol++;
            endCol--;
        }
        return ans;
    }
};
