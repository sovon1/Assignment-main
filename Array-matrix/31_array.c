#include <stdio.h>

int main() {
    int i, j, temp, A[10][10], numOfRowsCols;

    printf("Enter the number of rows and columns: ");
    scanf("%d", &numOfRowsCols);

    // Input matrix
    printf("Enter the matrix elements:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
    }
   //showing origianl matrix
    printf("Original matrix:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // Interchange the main diagonal
    for (i = 0; i < numOfRowsCols; i++) {
        temp = A[i][i];
        A[i][i] = A[i][numOfRowsCols - 1 - i];//you know minor is i+j = n-1 so j= n-1-i
        A[i][numOfRowsCols - 1 - i] = temp;
    }

    printf("\nMatrix after interchanging the main diagonal:\n");
    for (i = 0; i < numOfRowsCols; i++) {
        for (j = 0; j < numOfRowsCols; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
