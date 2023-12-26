#include<stdio.h>

int main() {
    int i, j, A[10][10], trans[10][10], numOfRows, numOfCols;

    printf("Enter the number of rows and columns: ");
    scanf("%d %d", &numOfRows, &numOfCols);

    // Scanning matrix
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            printf("Enter A[%d][%d]: ", i, j);
            scanf("%d", &A[i][j]);
        }
        printf("\n");
    }

    // Displaying original matrix
    printf("Original matrix A:\n");
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            printf("%d  ", A[i][j]);
        }
        printf("\n");
    }

    // Transposing matrix
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            trans[j][i] = A[i][j];
        }
    }

    // Checking if the matrix is symmetric
    int isSymmetric = 1;
    for (i = 0; i < numOfRows; i++) {
        for (j = 0; j < numOfCols; j++) {
            if (trans[i][j] != A[i][j]) {
                isSymmetric = 0;
                break;
            }
        }
        if (!isSymmetric) {
            break;
        }
    }

    // Outputting the result
    if(isSymmetric) {
        printf("It's a symmetric matrix\n");
    } else {
        printf("It's not a symmetric matrix\n");
    }

    return 0;
}
