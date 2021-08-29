// #include<iostream>
// using namespace std;
//
// void print(int arr[][10], int row, int col)
// {
//   int startRow = 0;
//   int endRow = row-1;
//   int startCol = 0;
//   int endCol = col-1;
//
//   //outer loop -  traverse array boundary using 4 inner loops
//   while(startCol <= endCol && startRow <=endRow) {
//
//     //start row
//     for(int i = startCol; col<=endCol; col++){
//       cout<<arr[startRow][i];
//     }
//
//     //end col
//     for(int j = startRow+1; j<=endRow; j++ ){
//       cout<<arr[j][endCol];
//     }
//
//     //end row
//     for(int i = endCol-1; i>=startCol; col--){
//       if(startRow == endRow){
//         break;
//       }
//       cout<<arr[endRow][i];
//     }
//
//     //start col
//     for(int j = endRow-1; row>=startRow; row--){
//       //avoid duplicate print
//       if(startCol == endCol){
//         break;
//       }
//       cout<<arr[j][startCol];
//     }
//
//     //update the variables for inner spiral
//     startRow++;
//     endRow--;
//     startCol++;
//     endCol--;
//
//   }
//
//
// }
//
// int main()
// {
//   int arr[][10] = { {1,2,3,4},
//                     {12,13,14,5},
//                     {11,16,15,6},
//                     {10,8,9,7}};
// }


// C++ Program to print a matrix spirally

#include <bits/stdc++.h>
using namespace std;
#define R 3
#define C 6

void spiralPrint(int m, int n, int a[R][C])
{
	int i, k = 0, l = 0;

	/* k - starting row index
		m - ending row index
		l - starting column index
		n - ending column index
		i - iterator
	*/

	while (k < m && l < n) {
		/* Print the first row from
			the remaining rows */
		for (i = l; i < n; ++i) {
			cout << a[k][i] << " ";
		}
		k++;

		/* Print the last column
		from the remaining columns */
		for (i = k; i < m; ++i) {
			cout << a[i][n - 1] << " ";
		}
		n--;

		/* Print the last row from
				the remaining rows */
		if (k < m) {
			for (i = n - 1; i >= l; --i) {
				cout << a[m - 1][i] << " ";
			}
			m--;
		}

		/* Print the first column from
				the remaining columns */
		if (l < n) {
			for (i = m - 1; i >= k; --i) {
				cout << a[i][l] << " ";
			}
			l++;
		}
	}
}

/* Driver Code */
int main()
{
	int a[R][C] = { { 1, 2, 3, 4, 5, 6 },
					{ 7, 8, 9, 10, 11, 12 },
					{ 13, 14, 15, 16, 17, 18 } };

	// Function Call
	spiralPrint(R, C, a);
	return 0;
}

// This is code is contributed by rathbhupendra
