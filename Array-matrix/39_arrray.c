//sparse matrix
/*A sparse matrix is a matrix in which most of the elements are zero.
 Typically,
 a matrix is considered sparse if the number of zero elements 
 is greater than the number of non-zero elements*/
#include <stdio.h>


int main() {
    int matrix[10][10 ], numRows, numCols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &numRows, &numCols);

    if (numRows <= 0 || numRows > MAX_SIZE || numCols <= 0 || numCols > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            printf("Enter matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    // Counting non-zero elements
    int nonZeroCount = 0;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (matrix[i][j] != 0) {
                nonZeroCount++;
            }
        }
    }

    // Checking if the matrix is sparse
    if (nonZeroCount > (numRows * numCols) / 2) {
        printf("The matrix is not sparse.\n");
    } else {
        printf("The matrix is sparse.\n");
    }

    return 0;
}
