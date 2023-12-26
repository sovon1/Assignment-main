//determinant


#include<stdio.h>

#define MAX_SIZE 10

int main() {
    int mat[MAX_SIZE][MAX_SIZE], size;

    printf("Enter the size of the square matrix: ");
    scanf("%d", &size);

    if (size <= 0 || size > MAX_SIZE) {
        printf("Invalid matrix size.\n");
        return 1;
    }

    printf("Enter the matrix elements:\n");
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("Enter mat[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }

    // Calculate the determinant using cofactor expansion
    int det = 0;

    if (size == 1) {
        det = mat[0][0];
    } else if (size == 2) {
        det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    } else {
        for (int k = 0; k < size; k++) {
            int subMatrix[MAX_SIZE - 1][MAX_SIZE - 1];

            for (int i = 1; i < size; i++) {
                int subMatrixCol = 0;
                for (int j = 0; j < size; j++) {
                    if (j != k) {
                        subMatrix[i - 1][subMatrixCol++] = mat[i][j];
                    }
                }
            }

            int sign = (k % 2 == 0) ? 1 : -1;
            det += sign * mat[0][k] * ((subMatrix[0][0] * subMatrix[1][1]) - (subMatrix[0][1] * subMatrix[1][0]));
        }
    }

    printf("Determinant of the matrix: %d\n", det);

    return 0;
}



/*/**
 * C program to find determinant of 3x3 matrix
 

#include <stdio.h>
#define SIZE 3 // Matrix size

int main()
{
    int A[SIZE][SIZE];
    int row, col;
    int a, b, c, d, e, f, g, h, i;
    long det;

    /* Input elements in matrix A from user 
    printf("Enter elements in matrix of size 3x3: \n");
    for(row=0; row<SIZE; row++)
    {
        for(col=0; col<SIZE; col++)
        {
            scanf("%d", &A[row][col]);
        }
    }

    
     * Used as a temporary variables to make calculation easy
     * |         |
     * | a  b  c |
     * | d  e  f |
     * | g  h  i |
     * |         |
     //comment
    a = A[0][0];
    b = A[0][1];
    c = A[0][2];
    d = A[1][0];
    e = A[1][1];
    f = A[1][2];
    g = A[2][0];
    h = A[2][1];
    i = A[2][2];

    
     * det(A) = a(ei - fh) - b(di - fg) + c(dh - eg)
     
    det = (a*(e*i - f*h)) - (b*(d*i - f*g)) + (c*(d*h - e*g));

    printf("Determinant of matrix A = %ld", det);

    return 0;
}

*/