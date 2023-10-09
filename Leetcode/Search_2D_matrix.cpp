/*Write an efficient algorithm that searches for a value in an m x n matrix. This matrix has the following properties:

Integers in each row are sorted from left to right.
The first integer of each row is greater than the last integer of the previous row.


Example 1:
Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
Output: true */

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();      ///size of the matrix
        int column = matrix[0].size()-1;  //column
        int row = 0;

        //staircase search
       while (row < n && column >= 0)
       {
           if( matrix[row][column] == target )  //if found, return true
           {
               return true;
           }
           else if ( matrix[row][column] > target) //if element of matrix is bigger than the target, we need to reduce the column
           {
               column--;
           }
           else {  //else we need to increase the row
               row++;
           }
       }
    return false; //not found
    }
};
