//sum of each row and column
#include<stdio.h>

int main() {
    int i, j, A[10][10], sumRow[10] = {0}, sumCol[10] = {0}, sumMainDiagonal = 0;
    int numOfRows, numOfCols;

    printf("How many rows and columns? : ");
    scanf("%d %d", &numOfRows, &numOfCols);

    // Scanning A matrix
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            printf("Enter A[%d][%d] : ", i, j);
            scanf("%d", &A[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // Sum of each row and column
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            sumRow[i] += A[i][j];
            sumCol[j] += A[i][j];
            if (i == j) {
                sumMainDiagonal += A[i][j];
            }
        }
    }

    // Print sum of each row
    for (i = 0; i < numOfRows; i++) {
        printf("Sum of row %d: %d\n", i + 1, sumRow[i]);
    }

    // Print sum of each column
    for (j = 0; j < numOfCols; j++) {
        printf("Sum of column %d: %d\n", j + 1, sumCol[j]);
    }

    // Print sum of main diagonal
    printf("Sum of main diagonal: %d\n", sumMainDiagonal);

    return 0;
}
